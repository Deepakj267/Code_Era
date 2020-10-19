#include<iostream>
using namespace std;
class node{	
private:
	int data;
	node *next,*head,*trav,*t;
public:
	node()
	{
		data=0;
		next=NULL;
	   trav=head=NULL;
	}
	node(int e)
	{
	   data=e;
	   next=NULL;
	   trav=head=NULL;
	}
	 void addLirst(int e);
	friend void  merge(node* n1,node* n2);
};

void node::addLirst(int e)
{
	 node* n=new node(e);
	 if(head==NULL)
	 {
		head=n;
		trav=head;
	 }else
	 {
		 t=head;
		 while(t->next!=NULL)
			 t=t->next;
		 t->next=n;
	 }
}
void  merge(node* n1,node* n2)
{
	node* n3;
	while(n1->trav!=NULL && n2->trav!=NULL)
	{
		
		
		 if(n1->data < n2->data)
		{
			n3=new node(n1->trav->data);
			//n3->trav->data=n1->trav->data;
			n1->trav=n1->trav->next;
		}else{
			n3=new node(n2->trav->data);
			//n3->trav->data=n2->trav->data;
			n2->trav=n2->trav->next;
		}	 
		 	 cout<<n3->data<<" ";
		if(n3->head==NULL){
			 n3->head=n3;
			n3->trav=n3->head;
		}
		 else{
			n3->trav->next=n3;
			n3->trav=n3;
		 }
	
	}
	while(n1->trav!=NULL)
	{
		n3=new node(n1->trav->data);
		//n3->trav->data=n1->trav->data;
		n1->trav=n1->trav->next;
		cout<<n3->data<<" ";
	}
	while(n2->trav!=NULL)
	{
		n3=new node(n1->trav->data);
		//n3->trav->data=n3->trav->data;
		n2->trav=n2->trav->next;
		cout<<n3->data<<" ";
	}
}

int main(){
	int ch,e;
	node* n1=new node;
	node *n2=new node;
	do{
		cout<<"\n1)to insert into 1st node \n2)to insert into 2nd node \n3)to Merge \n4)to print \n9)Exit 0		";
		cin>>ch;
		switch(ch){
		    case 1:
				cout<<"\ninsert element in list 1st ";
				cin>>e;
				n1->addLirst(e);
				break;
			case 2:
				cout<<"\ninsert element in list 2nd ";
				cin>>e;
				n2->addLirst(e);
				break;
			case 3:
				merge(n1,n2);
		}
	}while(ch!=0);
}
