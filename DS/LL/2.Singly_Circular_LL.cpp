#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *next;
};

class CLL
{
	public:
		node *root, *last;
		
		void CreateLL()
		{
			root=last=NULL;
		}
		
		
		void InsertLeft(int e)
		{
			node *n;
			n=new node;
			n->data=e;
			n->next=NULL;
			
			if(root==NULL)
			{
				root=last=n;
				last->next=root;
			}
			else
			{
				n->next=root;
				root=n;
				last->next=root;
			}
		
		}
		
		void DeleteLeft()
		{
			node *t;
			if(root==NULL)
			cout<<"Empmty"<<endl;
			else
			{
				t=root;
				root=root->next;
				last->next=root;
				cout<<"Deleted:"<<t->data<<endl;
				delete t;
			}
		}
		
		
		void InsertRight(int e)
		{
			node *n;
			n=new node;
			n->data=e;
			n->next=NULL;
			
			if(root==NULL)
			{
				root=last=n;
				last->next=root;
			}
			else
			{
				last->next=n;
				last=n;
				last->next=root;
			}
		}
		
		
		void DeleteRight()
		{
			node *t,*t2;
			if(root==NULL)
			cout<<"empty"<<endl;
			else
			{
				t=t2=root;
				while(t!=last)
				{
					t2=t;
					t=t->next;
				}
				last=t2;
				last->next=root;
				cout<<"Deleted:"<<t->data<<endl;
				delete t;
			}
			
		}
		void PrintList()
		{
			node *t;
			if(root==NULL)
			cout<<"Empty"<<endl;
			else
			{
				t=root;
				do
				{
					cout<<t->data<<" ";
					t=t->next;
				}while(t!=root);
			}
		}
		    
	
};

int main() 
{
    CLL l1;
   l1.CreateLL();	
   int ch;
   int e;
   
   do{
   cout<<"\n1) InsertLeft   ->"<<endl;
   cout<<"2) DeleteLeft   ->X" <<endl;
   cout<<"3) InsertRight  <-"<<endl;
   cout<<"4) DeleteRight  X<-"<<endl;
   cout<<"5) PrintList    -----"<<endl;
   cout<<"0) Exit"<<endl;
   
   cout<<endl<<"Enter your choice : "<<endl;
   	 
   cin>>ch;
    
    switch(ch)
    {
		case 1:
			cout<<"Enter element from Left:"<<endl;
			cin>>e;
			l1.InsertLeft(e);
			cout<<"Inserted :"<<e<<endl;
			break;
			
		case 2:
			l1.DeleteLeft();
			break;
			
		case 3:
			cout<<"Enter element from Right:"<<endl;
			cin>>e;
			l1.InsertRight(e);
			cout<<"Inserted :"<<e<<endl;
			break;
		
		case 4:
			l1.DeleteRight();
			break;
			
		case 5:
			l1.PrintList();
			break;
				
		case 0:
			cout<<"Exit"<<endl;
			break;
			
		default:
			cout<<"INVALID";
			break;		
	}
   }while(ch!=0);
   /*
   
   l1.InsertLeft(10);
   l1.InsertLeft(20);
   l1.InsertLeft(30);
   
   cout<<"Elements in LinkLIst:"<<endl;
   l1.PrintList();
   
   l1.DeleteLeft();
   
   l1.InsertRight(40);
   l1.InsertRight(50);
   l1.InsertRight(60);
   
    cout<<"Elements in LinkLIst:"<<endl;
   l1.PrintList();
   
   l1.DeleteRight();
   
   cout<<"Elements in LinkLIst:"<<endl;
   l1.PrintList();
   
   //l1.DeleteLeft();
   //l1.DeleteRight();
   
   //cout<<"Elements in LinkLIst:"<<endl;
  // l1.PrintList();
   */
   return 0;
}


