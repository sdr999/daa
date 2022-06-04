#include<bits/stdc++.h>
using namespace std;
void insertionSort(int a[], int n){
    int ctr=0,flag=0;
    for(int i=1;i<n;i++){
        ctr++;
        int j;
        j=i-1;
        int x=a[i];
        while (j>-1 && a[j]>x){
            ctr++;
            a[j+1]=a[j];
            flag++;
            j--;
        }
        a[j+1]=x;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"Shifts = "<<ctr<<endl;
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
        insertionSort(a,c);
    }
    
}
