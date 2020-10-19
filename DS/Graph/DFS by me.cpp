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

//for BFS, only replace DFS method,remaining is same.
void DFS(int source)
{
    visited[source]=1;
    cout<<source<<",";
    for(int i=0;i<node;i++)
    {
        if(adjm[source][i]==1 && visited[i]==0)
        {
            DFS(i);
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
    DFS(source);

    return 0;
}
