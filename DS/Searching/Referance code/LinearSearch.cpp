#include<iostream>
#include<conio.h>
using namespace std;
int arr[100];
int linearS(int size,int key)
{
	for(int i=0;i<size;i++)
	{
		if(key == arr[i])
		{
			return i;
		}
	}
	return -1;
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
	int a = linearS(size,key);
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