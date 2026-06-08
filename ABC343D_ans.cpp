#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,t;    cin>>n>>t;
    vector<ll> score(n);
    map<ll,int> mp;
    mp[0] = n;  //スコア0が, n人いるから
    //mp={(0,n)}    mp.size() 1だね

    for (int i=0;i<t;i++) {
        int a,b;    cin>>a>>b;  --a;
        //(人aのスコア)のマップを-1して0なら, そのmapを削除する
        if (--mp[score[a]] == 0) mp.erase(score[a]);
        
        score[a] += b;  //人aのスコアを+=b
        ++mp[score[a]]; //(人aのスコア)のマップを+1
        cout<<mp.size()<<'\n';
    }
}