#include<bits/stdc++.h>
using namespace std;

//Directedgraph using adjancency list O(n)
bool CheckCycle(int node,vector<int> adj[],int vis[],int dfsvis[])
{
    vis[node]=1;
    dfsvis[node]=1;
    for (auto it: adj[node])
    {
        if (!vis[it])
        {
           if (CheckCycle(it,adj,vis,dfsvis))
                return true;
        }
        else if (dfsvis[it])
           return true;
    }
    dfsvis[node]=0;
    return false;
}
bool isCycle(vector<int> adj[],int N)
{
    
    int vis[N+1],dfsVis[N+1];
    memset(vis,0,sizeof(vis));
    memset(dfsVis,0,sizeof(dfsVis));
    for (int i=1;i<=N;i++)
    {
        if (!vis[i])
        {
            if (CheckCycle(i,adj,vis,dfsVis))
               return true;
        }
    }
    return false;
}
int main()
{
    int n,m;         //n=no of Vertices, m= no of lines of edges 
    cout<<"enter n and m"<<endl;
    cin>>n>>m;
    vector<int> adj[n+1];
    
     cout<<"enter the nodes between there is edge"<<endl;
    for (int i=1;i<=m;i++)
    {
        int u,v;          //ex:- (2,3) is one line which mens there is a edge beetween 2 and 3
        cin>>u>>v;
        adj[u].push_back(v);
    }

    if (isCycle(adj,n))
        cout<<"Cycle Detected"<<endl;
    else
        cout<<"Cycle Not Detected"<<endl;
    return 0;
}
