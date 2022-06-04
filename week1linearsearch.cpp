#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, key;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        cin>>key;
        int j;
        for(j = 0; j < n; j++) {
            if(arr[j] == key) {
                cout<<"Present "<<j+1<<'\n';
                break;
            }
        }
        if(j == n) {
            cout<<"Not Present "<<j<<"\n";
        }
    }

}
