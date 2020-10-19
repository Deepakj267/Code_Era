//by deepak
#include<iostream>
using namespace std;

int adjm[20][20],visited[20],node;
void creategraph(int size)
{
    node=size;
    int src,dest;
    for(src=0;src<node;src++)
    {
        for(dest=0;dest<node;dest++)
        {
            cout<<"from"<<src<<"to"<<dest<<endl;
            cin>>adjm[src][dest];
        }
    }
}

//for DFS only replace BFS method,remaining is same.
void BFS(int source)
{
  int Q[100],front=0,rear=-1;
  int e,i;
  visited [source]=1;
  Q[++rear]=source;
  while(front<=rear)
  {
      e=Q[front++];
      cout<<e<<",";
      for(i=0;i<node;i++)
      {
          if(adjm[e][i]==1 && visited[i]==0 )
          {
              visited[i]=1;
          Q[++rear]=i;
          }
      }
  }
}

int main()
{
    int source,node;

    cout<<"enter no of nodes"<<endl;
    cin>>node;
    creategraph(node);

    cout<<"enter source"<<endl;
    cin>>source;
    BFS(source);

    return 0;
}
