#include <iostream>
using namespace std;

//global declaration.
void merger(int *,int, int , int );

//mergeSort
void merge_sort(int *arr, int start, int end)
{
   int mid;
   if (start < end){
      //divide the array at mid and sort independently using merge sort
      mid=(start+end)/2;
      merge_sort(arr,start,mid);
      merge_sort(arr,mid+1,end);
      //merge or conquer sorted arrays
      merger(arr,start,mid,end);
   }
}

// Merger sort
void merger(int *arr, int start, int mid, int end)
{
   int i, j, ti, temp[50];
   i = start;
   ti = start;
   j = mid + 1;

   while (i <= mid && j <= end)
    {
   if (arr[i] < arr[j])
     {
        temp[ti++]=arr[i++];
     }
        else
        {

        temp[ti++]=arr[j++];
        }
    }

while (i <= mid) {
   temp[ti++]=arr[i++];
}
while (j <= end) {
   temp[ti++]=arr[j++];
}

for (i = start; i < j; i++) {
   arr[i] = temp[i];
}

}



// read input array and call mergesort
int main()
{
int myarray[30], num;
cout<<"Enter number of elements to be sorted:";
cin>>num;
cout<<"Enter "<<num<<" elements to be sorted:";
for (int i = 0; i < num; i++) { cin>>myarray[i];
}
merge_sort(myarray, 0, num-1);
cout<<"Sorted array\n";
for (int i = 0; i < num; i++)
{
   cout<<myarray[i]<<"\t";
}
}
