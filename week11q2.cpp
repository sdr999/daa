#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n,amt;
 cin>>n;
 int i,j,a[n];
 for(i=0;i<n;i++)
 cin>>a[i];
 cin>>amt;
 int ans[amt+1];
 for(i=1;i<=amt;i++)
 ans[i]=0;
 ans[0]=1;
 for(j=0;j<n;j++)
 { 
 for(i=1;i<=amt;i++)
 {
 if(a[j]<=i)
 ans[i]+=(ans[i-a[j]]);
 }
 }
 cout<<ans[amt];
 return 0;
}
