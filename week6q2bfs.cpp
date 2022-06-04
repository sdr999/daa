#include <bits/stdc++.h>
using namespace std;

bool bfs(vector<int> adj[],int src, vector<int> &color,int n)
{
    queue<int> q;
    q.push(src);
    color[src]=1;
    while (!q.empty())
    {
        int node=q.front();
        q.pop();
        for (auto it:adj[node])
        {
            if (color[it]==-1)
            {
                color[it]=1-color[node];
                q.push(it);
            }
            else if (color[it]==color[node])
               return false;
        }
    }
    return true;
}

int main()
{
    cout<<"Enter the number of vertices and edges"<<endl;
    int n,m;
    cin>>n>>m;
    vector<int> adj[n+1];
    cout<<"enter the nodes between there is edge"<<endl;
    for (int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> color(n+1,-1);
    if (bfs(adj,1,color,n))
        cout<<"Yes Barpitite"<<endl;
    else
        cout<<"Not Barpitite"<<endl;
    
}
