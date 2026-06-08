#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;  cin>>n;
    vector<pair <long long,long long>> x;
    for(int i=0;i<n;i++){
        int a,b;    cin>>a>>b;
        x.push_back(make_pair(a,b));
    }
    long long sum=0;
    for(int i=0;i<24;i++){
        long long tmp=0;
        for(int j=0;j<x.size();j++){
            int time=(x[j].second+i);
            if(time>23) time-=24;
            if((time) >8 && (time)<18 ) tmp+=x[j].first;
        }
        sum=max(sum,tmp);
    }
    cout<<sum<<endl;
    return 0;
}