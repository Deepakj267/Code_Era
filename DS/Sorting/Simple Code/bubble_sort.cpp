#include<iostream>
using namespace std;
int main ()
{
   int i, j,temp;
   int a[5] = {10,2,0,43,12};
   cout <<"Input list ...\n";
   for(i = 0; i<5; i++) {
   cout <<a[i]<<"\t";
}
cout<<endl;
for(i = 0; i<5; i++) {
   for(j = 0; j<5; j++)
   {
      if(a[j] > a[j+1]) {
         temp = a[j];
         a[j] = a[j+1];
         a[j+1] = temp;
      }
   }
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<5; i++) {
   cout <<a[i]<<"\t";
   }
return 0;
}
