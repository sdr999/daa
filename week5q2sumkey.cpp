#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin >>t;
	while(t--)
    {
		int n,sum,flag=0;
		cin >> n;
		int ar[n];
		for(int i=0;i<n;++i) 
			cin >> ar[i];
		cin >> sum;
		sort(ar,ar+n);
		int a=0,b=n-1;
		while(a<b)
		{
			if(ar[a]+ar[b]>sum)
				--b;
			else if(ar[a]+ar[b]<sum)
				++a;
			else
			{
				cout << ar[a] << "&" << ar[b] << ", ";++a;--b;++flag;
			}		
		}
		if(!flag) cout << "NO Such Pair Exist" << "\n";
	}	
}
