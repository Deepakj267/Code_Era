#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

class DyanamicStack
{
	public:
	struct node *tos;
		
		void CreateStack()
		{
			tos=NULL;
		}
		
		void Push(int e)
		{
			node *n;
			n=new node;
			n->data=e;
			n->next=NULL;
			if(tos==NULL)
			tos=n;
			else
			{
				n->next=tos;
				tos=n;
			}
		}
		
		
		
		void Pop()
		{
			node *t;
			if(tos==NULL)
			cout<<"*******"<<endl<<"Empty"<<endl<<"*******"<<endl;
			else
			{
				t=tos;
				tos=tos->next;
				cout<<endl<<endl<<"*********"<<endl<<"deleted:"<<t->data<<endl<<"*********"<<endl;
				delete t;
			}
		}
		
		
		
		void PrintStack()
		{
			node *t;
			t=tos;
			cout<<"-----------------";
			cout<<endl<<"Stack Elements :"<<endl;
				while(t!=NULL)
				{
					cout<<"\n"<<t->data;
					t=t->next;
				}
				cout<<endl<<"-----------------";
			
		}
		
		
};

int main() 
{
	DyanamicStack l1;
	l1.CreateStack();	
   	int ch;
   	int e;
   
   do{
   	cout<<"\n\n1) push"<<endl;
   cout<<"2) pop"<<endl;
   cout<<"3) PrintStack"<<endl;
   cout<<"0) Exit"<<endl;
   
   cout<<endl<<"Enter your choice : "<<endl;
   	 
    cin>>ch;
    
    switch(ch)
    {
		case 1:
			cout<<"Enter element for push"<<endl;
			cin>>e;
			l1.Push(e);
			break;
			
		case 2:
			l1.Pop();
			break;
		case 3:
			if(l1.tos==NULL)
			cout<<endl<<"--------------"<<endl<<"Stack is empty"<<endl<<"--------------"<<endl;
			else
			{
				l1.PrintStack();
			}
			
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


