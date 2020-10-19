#include<iostream>
#include<conio.h>
using namespace std;

//global declaration
int arr[100];

int sequentialSerch(int key,int size)
{
    for(int i=0;i<size;i++)
    {
        if(key == arr[i])
        {
            return i;
        }
    }
    return (-1);
}

int main()
{
    int sz;
    cout<<"Enter size"<<endl;
    cin>>sz;

    int no;
    cout<<"Enter numbers"<<endl;

    for(int i=0;i<sz;i++)
    {
        cin>>no;
        arr[i]=no;
    }

    int ky;
    cout<<"which no you want to search"<<endl;
    cin>>ky;

    int s=sequentialSerch(ky ,sz);
    if(s==-1)
    {
        cout<<"not found";
    }
    else{
        cout<<"at pos:"<<s+1;
    }
	getch();
}
