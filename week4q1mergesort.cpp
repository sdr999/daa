#include <bits/stdc++.h>
using namespace std;
int c = 0;
void mergeArray(int arr[], int l, int mid, int h) {
    int n1 = mid - l + 1;
    int n2 = h - mid;
    int a[n1], b[n2];
    for(int i = 0; i < n1; i++) {
        a[i] = arr[l + i];
    }
    for(int i = 0; i < n2; i++) {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2) {
        c++;
        if(a[i] <= b[j]) {
            arr[k] = a[i];
            i++;
        }
        else {
            arr[k] = b[j];
            j++;
        }
        k++;
    }
    while(i < n1) {
        arr[k] = a[i];
        i++; k++;
    }
    while(j < n2) {
        arr[k] = b[j];
        j++; k++;
    }
}

void mergeSort(int arr[], int l, int h) {
    if(l < h) {
        int mid = l + (h - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, h);
        mergeArray(arr, l, mid, h);
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
        mergeSort(arr, 0, n - 1);
        display(arr, n);
        cout<<"comparisons = "<<c<<endl;
        delete []arr;
    }
}
