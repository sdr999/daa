#include<bits/stdc++.h>
using namespace std;

void DFS(int node,int destination,vector<int> &vis,vector<int> adj[],vector<int> &storedfs,int &flag)
{
    storedfs.push_back(node);
    vis[node]=1;
    for (auto it: adj[node])
    {
        if (!vis[it])
        {
            if (it==destination) flag=1;
            DFS(it,destination,vis,adj,storedfs,flag);
        }
         
    }
}
int main()
{
    int n,m;         //n=no of edges, m= no of lines of edges 
    cout<<"enter n and m"<<endl;
    cin>>n>>m;
    vector<int> adj[n+1];
    cout<<"enter the nodes between there is edge"<<endl;
    for (int i=1;i<=m;i++)
    {
        int u,v;          //ex:- (2,3) is one line which mens there is a edge beetween 2 and 3
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int source,destination;
    cout<<"Enter the source and Destination node"<<endl;
    cin>>source>>destination;
    vector<int> storedfs;
    vector<int> vis(n+1,0);
    int flag=0;
    DFS(source,destination,vis,adj,storedfs,flag);
    for (int i=0;i<storedfs.size();i++)
       cout<<storedfs[i]<<" ";
       cout<<endl;

    if (flag)
       cout<<"Yes Path exists"<<endl;
    else
       cout<<"No Such Path exists"<<endl;

    return 0;
}
