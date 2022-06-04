#include<iostream>
using namespace std;

int main()
{   int n,x;
    int count=0;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int A[n];
    cout<<"\n Enter the element of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"\n Enter the element you want to search"<<endl;
    cin>>x;

    for(int i=0;i<n;i++)
    {
     if(A[i]==x)
     {
        count++;
     }
    }

    cout<<"The frequency of key element is :"<<count;


    return 0;
}
