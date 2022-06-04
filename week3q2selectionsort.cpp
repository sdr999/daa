#include<bits/stdc++.h>
using namespace std;


void selectionSort(int a[], int n){
    int ctr=0,flag=0,k;

    for (int i=0;i<n;i++){
         ctr++;
        for(int j=i+1;j<n;j++){
            flag++;
            if(a[i]>a[j]){
               
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
        for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"Swaps = "<<ctr<<endl;
    cout<<"Comparison = "<<flag<<endl;
    }
int main(){
    int n;
    cout<<"enter the no. of test cases"<<endl;
    cin>>n;
    while(n--)
    {
            int c;
        cout<<"enter the no. of elements in an array"<<endl;
     cin>>c;
        int a[c];
         for(int i=0;i<c;i++)
         {
            cin>>a[i];
        }
        selectionSort(a,c);
    }
}
