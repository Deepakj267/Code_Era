#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

class DLL
{
	public:
		node *root;
		
		void CreateDLL()
		{
			root=NULL;
		}
		
		
		void InsertLeft(int e)
		{
			node *n;
			n=new node;
			n->data=e;
			n->left=n->right=NULL;
			if(root==NULL)
			{
				root=n;
			}
			else
			{
				n->right=root;
				root->left=n;
				root=n;
			}
		}
		
		void DeleteLeft()
		{
			node *t;
			if(root==NULL)
			cout<<"Empty "<<endl;
			else
			{
				t=root;
				root=root->right;
				root->left=NULL;
				cout<<endl<<"Deleted Left:"<<t->data<<endl;
				delete t;
			}
		}
		
		
		void InsertRight(int e)
		{
			node *n,*t;
			n=new node;
			n->data=e;
			n->left=n->right=NULL;
			if(root==NULL)
			{
			root=n;
			}
			else
			{
				t=root;
				while(t->right!=NULL)
				{
					t=t->right;
				}
				t->right=n;
				n->left=t;
			}
		}
		
		
		void DeleteRight()
		{
			node *t,*t2;
			if(root==NULL)
			cout<<"empty"<<endl;
			else
			{
				t=root;
				while(t->right!=NULL)
				{
				
					t=t->right;
				}
				t2=t->left;
				t2->right=NULL;
				cout<<endl<<"Deleted Right:"<<t->data<<endl;
				delete t;
			}
			
		}
		
		
		
		void ReversePrint()
		{
			node *t;
			if(root==NULL)
			cout<<"Empty"<<endl;
			else
			{
				t=root;
				while(t->right!=NULL)
				{
					t=t->right;
				}
				while(t!=NULL)
				{
					cout<<t->data<<" ";
					t=t->left;
				}
			}
		}
		    
	
};

int main() 
{
    DLL l1;
   l1.CreateDLL();	
  /* int ch;
   int e;
   
   do{
   cout<<"\n1) InsertLeft   ->"<<endl;
   cout<<"2) DeleteLeft   ->X" <<endl;
   cout<<"3) InsertRight  <-"<<endl;
   cout<<"4) DeleteRight  X<-"<<endl;
   cout<<"5) ReversePrint    -----"<<endl;
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
			l1.ReversePrint();
			break;
				
		case 0:
			cout<<"Exit"<<endl;
			break;
			
		default:
			cout<<"INVALID";
			break;		
	}
   }while(ch!=0);*/
   
   l1.InsertLeft(10);
   l1.InsertLeft(20);
   l1.InsertLeft(30);
   
   l1.InsertRight(40);
   l1.InsertRight(50);
   l1.InsertRight(60);
   
   cout<<"Elements in LinkLIst:"<<endl;
   l1.ReversePrint();
   
   l1.DeleteLeft();
   
   cout<<"Elements in LinkLIst:"<<endl;
   l1.ReversePrint();
   
   l1.DeleteRight();
   
   cout<<"Elements in LinkLIst:"<<endl;
   l1.ReversePrint();
   
   return 0;
}


