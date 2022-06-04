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
        int l = 0, h = n - 1;
        int i = 0, flag = 0;
        while(l <= h) {
            int mid = (l + h) / 2;
            i++;
            if(arr[mid] == key) {
                flag = 1;
                cout<<"Present "<<i<<endl;
                break;
            }
            else if(arr[mid] > key) h = mid - 1;
            else l = mid + 1;
        }
        if(!flag) cout<<"Present "<<n/2<<endl;
    }
    return 0;
}
