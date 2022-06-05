#include<iostream>
#include<vector>
using namespace std;
vector<int> sol;
int selection(vector<int> s,vector<int> t){
    int count=1;
    sol.push_back(0);
    int i=0;
    for(int j=0;j<t.size();j++){
        if(t[i]<=s[j]){
        sol.push_back(j);
        i=j;
        count++;
        }      
    }
    return count;
}
int main(){
    vector<int> s,t;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        s.push_back(temp);
    }
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        t.push_back(temp);
    }
    cout<<selection(s,t)<<"\n";
    for(int i=0;i<sol.size();i++)
        cout<<sol[i]<<" ";
}
