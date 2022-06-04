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

bool comp(node a, node b) {
    return a.wt < b.wt; 
}

int findPar(int u, vector<int> &parent) {
    if(u== parent[u]) 
	   return u; 
    return parent[u] = findPar(parent[u], parent); 
}

void unionn(int u, int v, vector<int> &parent, vector<int> &rank) {
    u = findPar(u, parent);
    v = findPar(v, parent);
    if(rank[u] < rank[v]) {
    	parent[u] = v;
    }
    else if(rank[v] < rank[u]) {
    	parent[v] = u; 
    }
    else {
    	parent[v] = u;
    	rank[u]++; 
    }
}
int main(){
	int N,m;
	cin>>N>>m;
	vector<pair<int,int>> adj[N];   //undirected graph
	cout<<"enter the edge and its weight"<<endl;
	for (int i=0;i<m;i++)
	{
		int a,b,wt;
		cin>>a>>b>>wt;
		adj[a].push_back({b,wt});    //pushing only one edge because we only need one edge to sort rather it became duplicates while sorting later
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
	sort(edges.begin(), edges.end(), comp); 
	
	vector<int> parent(N);
	for(int i = 0;i<N;i++) 
	    parent[i] = i; 
	vector<int> rank(N, 0); 
	
	int cost = 0;
	vector<pair<int,int>> mst; 

	for(auto it : edges) {
	    if(findPar(it.v, parent) != findPar(it.u, parent))
        {
	        cost += it.wt; 
	        mst.push_back({it.u, it.v}); 
	        unionn(it.u, it.v, parent, rank); 
	    }
	}

	cout << cost << endl;
	for(auto it : mst) cout << it.first << " - " << it.second << endl;
}
