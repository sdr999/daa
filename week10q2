#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){

return a.first > b.first;

}
int main(){
    vector<pair<int,int>> job;
    int n,profit,deadline;
    cin>>n;
    vector<int> t1,t2;
    for(int i =0;i<n;i++){
        cin>>profit>>deadline;
        job.push_back(make_pair(profit,deadline));
    }

    sort(job.begin(),job.end(),cmp);

    int max_time=0;
    for(int i=0;i<n;i++)
    max_time=max(max_time,job[i].second);

    int count=0,maxprofit=0;
    vector<int> fill;
    for(int i=0;i<n;i++)
    fill.push_back(-1);

    for(int i=0;i<n;i++){
        int j=job[i].second-1;
        while(j>=0&& fill[j]!=-1){
            j--;
        }
        if(j>=0&&fill[j]==-1)
        {
            fill[j]=i;
            count++;
            maxprofit+=job[i].first;
        }
    }
    cout<<"\n"<<count<<"\n"<<maxprofit;
}
