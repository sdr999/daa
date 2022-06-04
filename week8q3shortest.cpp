#include <bits/stdc++.h>
using namespace std;
 
#define INF INT_MAX


int shortestPath(vector<vector<int>> &graph, int u, int v, int k,int n)
{
   if (k == 0 && u == v)             return 0;
   if (k == 1 && graph[u][v] != INF) return graph[u][v];
   if (k <= 0)                       return INF;
 
   int res = INF;
 
   for (int i = 0; i < n; i++)
   {
       if (graph[u][i] != INF && u != i && v != i)
       {
           int rec_res = shortestPath(graph, i, v, k-1,n);
           if (rec_res != INF)
              res = min(res,graph[u][i] + rec_res);
       }
   }
   return res;
}
 
int main()
{
    int n,m;
    cout<<"enter the number of nodes and edges:"<<endl;
    cin>>n>>m;
    vector<vector<int>> graph(n+1,vector<int> (n+1,INF));
    for (int i=0;i<m;i++)
    {
        int a,b,wt;
        cout<<"enter the node,edge and weight:";
        cin>>a>>b>>wt;
        graph[a][b]=wt;
    }
    for (int i=1;i<=n;i++)
        graph[i][i]=0;
    int u,v,k;
    cout<<"Enter the source, destination and k:"<<endl;
    cin>>u>>v>>k;
    cout << "Weight of the shortest path is "<<
          shortestPath(graph, u, v, k,n);
    return 0;
}
