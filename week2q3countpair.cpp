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
        int key;
        cin>>key;
        sort(arr, arr + n);
        int c = 0, l, h;
        for(int i = 0; i < n; i++) {
            l = i;
            h = n - 1;
            while(l < h) {
            if(arr[h] - arr[l] == key) {
                c++;
                h--;
                l++;
            }
            else if(arr[h] - arr[l] > key) h--;
            else l++;
           }
        }
        cout<<c<<endl;
    }
}
