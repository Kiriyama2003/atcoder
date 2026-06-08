#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int h,w;    cin>>h>>w;
    vector<string> s(h);
    rep(i,h) cin>>s[i];
    vector<int> a;
    for(int i=0;i<h;i++){
        for(int j=0;j<s[0].size();j++){
            if(s[i][j]=='o') {
                a.push_back(i);
                a.push_back(j);
            }
        }
    }

    int ans=abs(a[0]-a[2])+abs(a[1]-a[3]);
    cout<<ans<<endl;
    return 0;
}