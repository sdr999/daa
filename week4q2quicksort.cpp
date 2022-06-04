#include <bits/stdc++.h>
using namespace std;
int c = 0, s = 0;
int partition(int arr[], int l, int h) {
    int x = (rand() % (l - h)) + l;
    if(h != x) {
        s++;
        swap(arr[x], arr[h]);
    }
    int pivot = arr[h];
    int i = l - 1;
    for(int j = l; j <= h - 1; j++) {
        if(arr[j] <= pivot) {
            i++;
            s++;
            swap(arr[i], arr[j]);
        }
    }
    s++;
    swap(arr[i + 1], arr[h]);
    return i + 1;
}

void quickSort(int arr[], int l, int h) {
    if(l < h) {
        int pivot = partition(arr, l, h);
        quickSort(arr, l, pivot - 1);
        quickSort(arr, pivot + 1, h);
    }
}

void display(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

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
        quickSort(arr, 0, n - 1);
        display(arr, n);
        cout<<"swaps = "<<s<<endl;
    }
}
