#include<iostream>
#include<conio.h>
using namespace std;
int arr[100];
int binaryS(int strt,int end,int key)
{
	if( strt == end)
	{
		if(key == arr[strt])
			return strt;
		else
			return -1;
	}
	else
	{
		int mid;
		mid = (strt+end)/2;
		if(key == arr[mid])
			return mid;
		else if(key < arr[mid])
		{
			return binaryS(strt,mid-1,key);
		}
		else
		{
			return binaryS(mid+1,end,key);
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
	int a = binaryS(0,size-1,key);
	if(a == -1)
	{
		cout<<"\nKey is not found\n";
	}
	else
	{
		cout<<"\nKey is found at pos "<<a+1<<"\n";
	}
	getch();
}