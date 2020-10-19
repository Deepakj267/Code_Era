#include <iostream>
#include <conio.h>
using namespace std;
int s[100];
int tos = -1;
int size;

int isFull()
{
	if(tos==size-1)
	return 1;
	else
	return 0;
}
int isEmpty()
{
	if(tos==-1)
	return 1;
	else
	return 0;
}

void push(int val)
{
	if(isFull()==1)
	cout<<"Full"<<endl<<endl;
	else
	{
	
		tos++;
		s[tos]=val;
		cout<<"pushed value is:"<<val<<endl<<endl;
	}
}
void PrintStack()
{
	if(isEmpty()==1)
	cout<<"Empty"<<endl<<endl;
	else
	{
		cout<<"following elements in stsck"<<endl<<endl;
		for(int i=tos;i>=0;i--)
		{		
			cout<<s[i]<<endl;
		}
	}
}
void atTop()
{
	cout<<s[tos]<<endl<<endl;
}
int pop()
{
	if(isEmpty()==1)
	cout<<"Empty"<<endl;
	else
	{
		int temp;
		temp=s[tos];
		tos--;
		return temp;
	}
}
int main()
{
	int ch;
	//int size;
		cout<<"Enter size"<<endl;
		cin>>size;
	do{
		cout<<"Enter choice  \n 1.push  \n 2.pop  \n 3.PrintStack  \n 4.atTop  \n 0.Exit"<<endl<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				int val;
				cout<<"Enter Element to add in Stack:"<<endl;
				cin>>val;
				push(val);
				break;
			case 2:
				pop();
				break;
			case 3:
				PrintStack();
				break;
			case 4:
				atTop();
				break;
			default:
				cout<<"invalid"<<endl;
				break;
				
		}
	}while(ch);
	return 0;
}
