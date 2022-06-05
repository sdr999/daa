#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
bool majority(vector<int> arr){
    map<int,int> m;
    for(int i=0;i<arr.size();i++)
    m[arr[i]]++;
    for( auto& i:m){
        if(i.second>=(arr.size()/2))
           return true;
    }
    return false;  
}
int median(vector<int> arr){
    if(arr.size()%2==0)
       return (arr[(arr.size()/2)]+arr[(arr.size()/2)-1])/2;
    else
       return arr[(arr.size()/2)];
    

}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    if(majority(arr))
        cout<<"\nYES\n";
    else
        cout<<"\nNO\n";
    cout<<median(arr);
}
