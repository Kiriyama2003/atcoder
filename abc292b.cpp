#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q;        cin>>N>>Q;
    vector<int>stat(N,0);
    vector<string>ans;

    for(int i=0;i<Q;i++){
        int num,x;      cin>>num>>x;
        if(num==1)      stat[x]++;
        else if(num==2) stat[x]=2;
        else{
            if(stat[x]==2)  ans.push_back("Yes");
            else            ans.push_back("No");
        }
    }
    for(auto aa:ans) cout<<aa<<endl;
    return 0;
}