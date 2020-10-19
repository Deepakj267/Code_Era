#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

class LinkedList
{
	public:
		struct node *root;
		
		void createLL()
		{
			root=NULL;
		}
		
		void InsertLeft(int e)
		{
			node *n;
			n=new node;
			n->data=e;
			n->next=NULL;
			if(root==NULL)
			root=n;
			else
			{
				n->next=root;
				root=n;
			}
		}
		
		void insertRight(int e)
		{
			node *n,*t;
			n=new node;
			n->data=e;
			n->next=NULL;
			if(root==NULL)
			root=n;
			else
			{
				t=root;
				while(t->next!=NULL)
				{
					t=t->next;
				}
				t->next=n;
			}
		}
		
		void deletleft()
		{
			node *t;
			if(root==NULL)
			cout<<"Empty"<<endl;
			else
			{
				t=root;
				root=root->next;
				cout<<"deleted:"<<t->data<<endl;
				delete t;
			}
		}
		
		
		void deleteright()
		{
			node *t,*t2;
			if(root==NULL)
			cout<<"empty"<<endl;
			else
			{
				t=t2=root;
				while(t->next!=NULL)
				{
					t2=t;
					t=t->next;
				}
				
				
				t2->next=NULL;
				cout<<"Deleted:"<<t<<endl;
				delete t;
			}
		}
		void printlist()
		{
			node *t;
			if(root==NULL)
			cout<<"Empty"<<endl;
			else
			{
				t=root;
				while(t!=NULL)
				{
					cout<<t->data<<" ";
					t=t->next;
				}
			}
		}
		
		int search(int key)
		{
			node *t;
			if(root==NULL)
			{   cout<<"Empty"<<endl;   return (-1);   }
			
			else
			{
				t=root;
				while(t!=NULL)
				{  
				   if(t->data==key)
					return (1);	
				   else  
				   {  
				  	 t=t->next;
				   }	
				}return (-1);		
			}
		}
		
		void deleteelement(int key)
		{
			node *t,*t2;
			if(root==NULL)
			cout<<"Empty"<<endl;
			else
			{
				t=t2=root;
				while(t!=NULL && t->data!=key)
				{
					t2=t;
					t=t->next;
				}
				if(t!=NULL)
				{
					if(t==root)
					root=root->next;
					
				
				else if(t->next==NULL)
				{
					t2->next=NULL;
				}
				else
				{
					t2->next=t->next;
				}
				cout<<"Deleted:"<<t->data<<endl;
				delete t;
			    
				}
				
				else
				{
					cout<<"Not Found"<<endl;
				}
			}
		}
};

int main() 
{
	LinkedList l1;
	l1.createLL();	
   int ch;
   int e;
   
   do{
   	cout<<"\n\n1) Insert Left"<<endl;
   cout<<"2) Insert Right"<<endl;
   cout<<"3) Delete Left"<<endl;
   cout<<"4) Delete Right"<<endl;
   cout<<"5) PrintList"<<endl;
   cout<<"6) search"<<endl;
   cout<<"7) delete Elements"<<endl;
   cout<<"0) Exit"<<endl;
   
   cout<<endl<<"Enter your choice : "<<endl;
   	 
    cin>>ch;
    
    switch(ch)
    {
		case 1:
			cout<<"Enter from left"<<endl;
			cin>>e;
			l1.InsertLeft(e);
			break;
			
		case 2:
			cout<<"Enter from right "<<endl;
			cin>>e;
			l1.insertRight(e);
			break;
			
		case 3:
			l1.deletleft();
			break;
			
		case 4:
			l1.deleteright();
			break;
			
		case 5:
			l1.printlist();
			break;
			
		case 6:
			cout<<"enter element for search"<<endl;
			cin>>e;
			l1.search(e);
			
			if(l1.search(e)==-1)
			cout<<"Not Found"<<endl;
			else
			{
				cout<<"Element is:"<<e<<endl;
			}
			
			break;
			
		case 7:
			cout<<"enter element for delete"<<endl;
			cin>>e;
			l1.deleteelement(e);
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


