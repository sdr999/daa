#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n,m;
	cin >> n ;
	int ar[n];
	for(int i=0;i<n;++i) 
		cin >> ar[i];
	cin >> m;
	int ar2[m];
	for (int i = 0; i < m; ++i)
		cin  >> ar2[i];
	int a=0,b=0;
	while(a<n && b<m)
	{
		if(ar[a] < ar2[b])
			++a;
		else if(ar[a] > ar2[b])
			++b;
		else
			{
                cout << ar[a] << " ";++a;++b;}
	}
	cout << "\n";
}
