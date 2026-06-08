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

    int n,m;    cin>>n>>m;
    vector<vector<int>> ans;
    ans.push_back({});

    //i=0~(n-1) 答えの文字数と同じ
    rep(i,n){
        vector<vector<int>> nxt;
        //nxt={}
        //i=0のとき, ans={{}}
        for(vector<int> a:ans){
            int sx;
            if(a.size()==0) sx=1;
            else if(a.size()>0) sx=a.back()+1;

            a.push_back(sx);
            //a={●,●,} 最後が最大値m以下なら
            while(a.back()<=m){
                //nxt={1}
                //nxt={{1},{2}}
                nxt.push_back(a);
                a.back()++;
            }
        }
        //ans={{1},{2}} nxt={{4}}
        //ansは, 前の記録を保持するだけ
        ans=nxt;
        //i=0のとき, ans={{1},{2},{3}}
        //i=1のとき, ans={{1,2},{1,3},{2,3}}
    }


    //ans={{1,2},{1,3},{2,3}}
    for(vector<int> a:ans){
        rep(i,n) cout<<a[i]<< ( (i!=n-1) ?" " :"\n");
    }

    return 0;
}