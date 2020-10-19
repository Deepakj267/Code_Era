#include<iostream>
#include<conio.h>
using namespace std;

int arr[100];
int binarySerch(int start,int end,int key)
{
    if(start==end)
    {
        if(key==arr[start])
        {
            return start;
        }
        else{
            return (-1);
        }
    }
    else
    {
		int mid = (start+end)/2;
        if (key==arr[mid])
            return mid;
        else{
        if(key<arr[mid])
            return (binarySerch(start,mid-1,key));
         else
         {
            return (binarySerch(mid+1,end,key));
         }
        }
    }

}
int main()
{
	int size;
	cout<<"\nEnter size you want\n";
	cin>>size;

	int no;
	cout<<"\nEnter the array elements\n";
	for(int i=0;i<size;i++)
	{
		cin>>no;
		arr[i] = no;
	}

	int key;
	cout<<"\nEnter the key to find\n";
	cin>>key;

	int a = binarySerch(0,size-1,key);
	if(a == -1)
	{
		cout<<"\nKey is not found\n";
	}
	else
	{
		cout<<"\nKey is found at pos "<<a<<"\n";
	}
	getch();
}
