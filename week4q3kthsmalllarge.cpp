#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int *arr = new int[n];
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        int k;
        cin>>k;
        priority_queue<int> pq;
        for(int i = 0; i < k; i++) {
            pq.push(arr[i]);
        }
        for(int i = k; i < n; i++) {
            pq.push(arr[i]);
            if(pq.size() > k) pq.pop();
        }
        if(pq.empty()) cout<<"Not present"<<endl;
        else cout<<pq.top()<<endl;
        delete []arr;
    }
}
