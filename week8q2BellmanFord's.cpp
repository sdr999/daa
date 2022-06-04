#include<bits/stdc++.h>
using namespace std;
struct node {
    int u;
    int v;
    int wt; 
    node(int first, int second, int weight) {
        u = first;
        v = second;
        wt = weight;
    }
};

void bellman_ford(vector<node> edges,int n,int src)
{
    vector<int> dist(n,10000000);
    vector<int> parent(n,0);
    dist[src]=0;
    parent[src]=src;
    for (int i=0;i<n-1;i++)
    {
        for (auto it:edges)
        {
            if (dist[it.u]+it.wt<dist[it.v])
            {
               dist[it.v]=dist[it.u]+it.wt;
               parent[it.v]=it.u;
            }   
        }
    }

    int flag=0;
    for (auto it:edges)
    {
        if (dist[it.u]+it.wt<dist[it.v])
        {
            cout<<"Negative Cycles"<<endl;
            flag=1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<"shortest paths"<<endl;
        for (int i=0;i<n;i++)
        {
           cout<<i<<",";
           int j=i;
           while (parent[j]!=0)
           {
               j=parent[j];
               cout<<j<<",";
           }
           if (i!=0) cout<<0<<",";
           cout<<":"<<dist[i]<<endl;
        }
    }
}

int main()
{
    int N,m;
	cin>>N>>m;
	vector<pair<int,int>> adj[N];
	cout<<"enter the edge and its weight"<<endl;
	for (int i=0;i<m;i++)
	{
		int a,b,wt;
		cin>>a>>b>>wt;
		adj[a].push_back({b,wt});
	}
	vector<node> edges; 
	
	//converting adjacency list to the easy edge structure
    for (int i=0;i<N;i++)
	{
		for (auto it:adj[i])
		{
			edges.push_back(node(i,it.first,it.second));
		}
	}
    int src;
    cout<<"Enter Source Node:";
    cin>>src;
    bellman_ford(edges,N,src);
}
