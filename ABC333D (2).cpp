#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;cin>>n;   //頂点の個数n
    vector<vector<int>> to(n);
    //頂点の関係n-1コ
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b; --a;--b;
        to[a].push_back(b);
        to[b].push_back(a);
    }
    int ans=n;  //ansは最大値
    //for(int v:to[0]){
    for(int i=0;i<to[0].size();i++){
        int v=to[0][i];

        //v=to[0][0] to[0][1] to[0][2]
        auto f=[&](auto f,int v,int p=-1) -> int{
            int res=1;
            for(int u:to[v]){
                if(u==p) continue;
                res+=f(f,u,v);
            }
            return res;
        };
        //n:頂点の個数
        int now=n-f(f,v,0);
        ans=min(ans,now);
    }
    cout<<ans<<endl;
    return 0;
}