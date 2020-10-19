#include<iostream>
using namespace std;
int Q[100],MaxSize=10,front=0,rear=-1;

/*void CreateQueue(int size)
{
	MaxSize=size;
	front=0;
	rear=-1;
}*/

void EnQ(int e)
{
	rear++;
	Q[rear]=e;
}

int DeQ()
{
	int temp;
	temp=Q[front];
	front++;
	return temp;	
}

int isFull()
{
	if(rear==MaxSize-1)
	return 1;
	else
	{
	return 0;
	}
}

int isEmpty()
{
	if(front>rear)
	
		return 1;
	
	else
	{
		return 0;
	}
}

void PrintQ()
{
	
	for(int i=front;i<=rear;i++)
	{
		cout<<Q[i]<<" ";
		
	}
}
int main() 
{
   int ch;
   int e;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   
   do{
   	cout<<endl<<"Enter your choice : "<<endl;
    cin>>ch;
    
    switch(ch)
    {
    	case 1:
    		
    		if(isFull()==1)
    		{
    			cout<<"full"<<endl;
			}
			else
			{
				
				cout<<"enter into Q"<<endl;
				cin>>e;
				EnQ(e);
				cout<<endl<<"You Entered "<<e<<endl;
			}
			break;
		case 2:
				if(isEmpty()==1)
    		{
    			cout<<"Empty"<<endl;
			}
			else
			{
				e=DeQ();
				cout<<"You remove:"<<e<<endl;
			}
			break;
		case 3:
			if(isEmpty()==1)
			cout<<"Empty"<<endl;
			else
			{
				PrintQ();
			}
			break;
		case 4:
			cout<<"Exit"<<endl;
			break;
		default:
			cout<<"INVALID";
			break;
			
			
	}
   }while(ch!=4);
return 0;
}

