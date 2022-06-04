#include <bits/stdc++.h>
using namespace std;

void Dijkastras(vector<pair<int,int>> adj[],int n,int src)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    vector<int> dist(n+1,INT_MAX);
    vector<int> parent(n+1,0);
    dist[src]=0;
    parent[src]=src;
    
    pq.push({0,src});
    
    while (!pq.empty())
    {
        int node=pq.top().second;
        pq.pop();
        
        for (auto it:adj[node])
        {
            if (dist[node]+it.second<dist[it.first])
            {
                parent[it.first]=node;
                dist[it.first]=dist[node]+it.second;
                pq.push({dist[it.first],it.first});
            }
        }
    }
    
    cout<<"shortest paths"<<endl;
    for (int i=1;i<n+1;i++)
    {
        cout<<i<<",";
        int j=i;
        while (parent[j]!=1)
        {
            j=parent[j];
            cout<<j<<",";
        }
        if (i!=1) cout<<1<<",";
        cout<<":"<<dist[i]<<endl;
    }
}

int main()
{
    int n,m;
    cout<<"enter the number of nodes and edges:";
    cin>>n>>m;
    vector<pair<int,int>> adj[n+1];
    cout<<"enter the source node,target node and weight:"<<endl;
    for (int i=0;i<m;i++)
    {
        int a,b,wt;   
        cin>>a>>b>>wt;
        adj[a].push_back({b,wt});
        adj[b].push_back({a,wt});
    }
    
    Dijkastras(adj,n,1);
    return 0;
}
