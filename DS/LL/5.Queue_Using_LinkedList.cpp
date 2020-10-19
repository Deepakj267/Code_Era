#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *front, *rear, *next;
};

class Queue
{
	public:
		node *rear, *front;
		
		void CreateQueue()
		{
			rear=front=NULL;
		}
		
		
		void Enqueue(int e)
		{
			node *n,*t;
			n=new node;
			n->data=e;
			n->next=NULL;
			if(rear==NULL)
			rear=front=n;
			else
			{
				rear->next=n;
			}
		}
		
		void Dequeue()
		{
			node *t;
			if(front==NULL)
			cout<<"Empty Queue"<<endl;
			else
			{
				t=front;
				front=front->next;
				cout<<"Dequeue:"<<t->data<<endl;
				delete t;
			}
		}
		
		
		void PrintQueue()
		{
			node *t;
			if(front==NULL)
			cout<<"Empty"<<endl;
			else
			{
				t=front;
				while(t!=NULL)
				{
					cout<<t->data<<" ";
					t=t->next;
				}
			}
		}
		
	
};

int main() 
{
	Queue l1;
	l1.CreateQueue();	
   int ch;
   int e;
   
   do{
   cout<<"\n1) Enqueue"<<endl;
   cout<<"2) Dequeue"<<endl;
   cout<<"3) Print_Queue"<<endl;
   cout<<"0) Exit"<<endl;
   
   cout<<endl<<"Enter your choice : "<<endl;
   	 
   cin>>ch;
    
    switch(ch)
    {
		case 1:
			cout<<"Enter element into Queue"<<endl;
			cin>>e;
			l1.Enqueue(e);
			break;
			
		case 2:
			l1.Dequeue();
			break;
			
		case 3:
			l1.PrintQueue();
			break;
			
		case 0:
			cout<<"Exit"<<endl;
			break;
			
		default:
			cout<<"INVALID";
			break;		
	}
   }while(ch!=0);
return 0;
}


