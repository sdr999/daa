#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) 
          cin>>arr[i];
        vector<int> v;
        for(int i = 0; i < n; i++) {
            int k = n - 1;
            int j = i + 1;
            while(j < n && k > j) {
                if(arr[i] + arr[j] == arr[k]) {
                    v.push_back(i+1);
                    v.push_back(j+1);
                    v.push_back(k+1);
                    break;
                }
                else if(arr[i] + arr[j] > arr[k]) {
                    j++;
                    k = n - 1;
                }
                else k--;
            }
        }
        if(v.empty()) 
          cout<<"No sequence found"<<endl;
        else {
            for(auto it: v) {
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
}
