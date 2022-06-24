#include<bits/stdc++.h>
using namespace std;
int main() {
 int n;
 cin>>n;
 int i,j,a[n];
 for(i=0;i<n;i++)
 cin>>a[i];
 int sum=0;
 for(i=0;i<n;i++)
 sum+=a[i];
 if(sum%2!=0)
 {
 cout<<"no";
 return 0;
 }
 sum=sum/2;
 bool s[n+1][sum+1];
 for(i=0;i<=n;i++)
 {
 for(j=0;j<=sum;j++)
 {
 if(j==0)
 s[i][j]=1;
 else if(i==0)
 s[i][j]=0;
 else
 {
 if(a[i-1]>j)
 s[i][j]=s[i-1][j];
 else
 s[i][j]=(s[i-1][j] || s[i-1][j-a[i-1]]);
 }
 }
 }
 if(s[n][sum])
 cout<<"yes";
 else
 cout<<"no";
 return 0;
}
