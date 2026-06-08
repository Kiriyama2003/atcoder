#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;  cin>>n;
    vector<string> s(n);
    rep(i,n) cin>>s[i];

    //実行フェーズ
    map<string,int> cnt;
    for(int i=0;i<n;i++){
        if(cnt[s[i]]==0) cout<<s[i]<<endl;
        else cout<<s[i]<<"("<<cnt[s[i]]<<")"<<endl;
        cnt[s[i]]++;
    }




    return 0;
}