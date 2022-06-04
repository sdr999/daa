#include<iostream>
using namespace std;
char findmax(char a[], int n)
{
    char m=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>m)
        {
            m=a[i];
        }
    }
    return m;

}
void count_sort(char a[],int n)
{
    int i,*c,j,dup,temp;
    char max=findmax(a,n);
    int m=int(max);
    c = new int[m+1];
    for(i=0;i<m+1;i++)
    {
        c[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        c[int(a[i])]++;

    }
    dup=c[i];
    for(int i=0;i<m+1;i++)
    {
        if(c[i]>dup)
        {
            dup=c[i];
            temp=i;
        }
    }

   char ch=(char)temp;
   if(dup>1)
   {
        cout<<ch<<" :"<<dup<<endl;
   }
   else
   {
       cout<<"No duplicates found"<<endl;
   }



}

int main()
{
    int t,n;
    cout<<"enter number of test case"<<endl;
    cin>>t;

    while(t>0)
    {
        cout<<"enter number of elements in array"<<endl;
        cin>>n;
        char a[n];
        cout<<"enter "<<n<<" number of elements"<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        count_sort(a,n);
        t--;
    }


}
