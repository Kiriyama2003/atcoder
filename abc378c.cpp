#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
int main(void){
    int n;  cin>>n;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++) cin>>a[i];

    map<int,int> mp;
    for(int i=1;i<=n;i++){
        if(mp.find(a[i]) == mp.end()){
            cout<<-1<<endl;
            mp[a[i]]=i;
        }
        else{
            cout<<mp[a[i]]<<endl;
            mp[a[i]]=i;
        }

    }

    return 0;
}