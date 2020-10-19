#include <iostream>
using namespace std;

int CQ[5];
int front = 0, rear = -1, size=5,cnt=0;

//insert into Queue.
void EQ(int e)
{
	rear=(rear+1)%size;
	cnt++;
	CQ[rear]=e;	
}

int DQ()
{
	int temp;
	
	temp=CQ[front];
	cnt--;
	front=(front+1)%size;
	return (temp);
}

int isFull()
{
	if(cnt==size)
	return 1;
	else
	{
		return 0;
	}
}

int isEmpty()
{
	if(cnt==0)
	return 1;
	else
	{
		return 0;
	}
}

void PrintCQ()
{
	int c=0,i=front;
	while(c<cnt)
	{
		cout<<CQ[i]<<" ";
		i=(i+1)%size;
		c=c+1;		
	}
}


int main() {

   int ch, val;
   cout<<"1)Insert\n";
   cout<<"2)Delete\n";
   cout<<"3)Display\n";
   cout<<"4)Exit\n";
   do {
      cout<<"Enter choice : "<<endl;
      cin>>ch;
      switch(ch) {
         case 1:
         	if(isFull()==1)
         	{
         		cout<<"full"<<endl;
			 }
			 else
			 {
			 	 cout<<"Input for insertion: "<<endl;
         			cin>>val;
         			EQ(val);
			 }
        
         break;

         case 2:
         	if(isEmpty()==1)
         	cout<<"empty"<<endl;
			 else
			 {
			 	DQ();	
			 }
         
         break;

         case 3:
         	if(isEmpty()==1)
         	cout<<"empty"<<endl;
         	else
         	{
         		PrintCQ();
			 }
         
         break;

         case 4:
         cout<<"Exit\n";
         break;
         default: cout<<"Incorrect!\n";
      }
   } while(ch != 4);
   return 0;
}
