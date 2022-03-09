#include<iostream>
using namespace std;
int main()
{
    int z; cin>>z;
    while(z--)
    {
        int s;cin>>s;
        int a[s];
        for(int i=0;i<s;i++)
        cin>>a[i];
        int n,c=0;  cin>>n;
        int l=0,u=s,mid,x=s;;
        while(l<u)
        {

            mid=(l+u)/2;
            if(a[mid]==n)
            {c++;
            for(int i=mid+1;i<u;i++)
            if(a[i]==n)
            c++;
            else
            break;
            for(int i=mid-1;i>l;i--)
            if(a[i]==n)
            c++;
            else
            break;
            break;
            }
            else if(a[mid]>n)
            u=mid;
            else
            l=mid;

        }cout<<n<<"-"<<c;
        c=0;
        }

}
