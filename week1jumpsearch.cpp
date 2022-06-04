#include <bits/stdc++.h>
using namespace std;
void jump(int arr[], int n, int key) {
    int start = 0, comp = 0, flag = 0;
    int end = sqrt(n);
    while(arr[end] <= key && end < n) {   
        comp++;
        start = end;
        end += sqrt(n);
        if(end > n-1) end = n;
    }
    for(int i=start;i<end;i++) {
        if(arr[i] == key) {
          flag = true;
          break;
        }
    }
    if(flag) cout<<"Present "<<comp<<endl;
    else cout<<"Not present"<<endl;  
}
int main() 
{
    int n;
    cin>>n;
    while(n--) 
    {
        int size;
        cin>>size;
        int arr[size];
        for(int i = 0; i < size; i++) cin>>arr[i];
        int key;
        cin>>key;
        jump(arr, size, key);
    }
    return 0;
}
