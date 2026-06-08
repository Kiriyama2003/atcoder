#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define ALL(n) =n.begin(),n.end()
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int h,w;        cin>>h>>w;
    vector<string>s(h);
    rep(i,h) cin>>s[i];

    int n=h*w;
    dsu uf(n);
    rep(i,h)rep(j,w){
        if(s[i][j]!='#') continue;
        //まず　s[i][j]に'#'がある
        for(int di=-1;di<=1;di++){
            for(int dj=-1;dj<=1;dj++){
                int ni=i+di,nj=j+dj;   //s[i][j]の八近傍であるs[ni][nj]
                if(ni<0||ni>=h||nj<0||nj>=w) continue; //範囲外
                if(s[ni][nj]!='#') continue;            //'#'でない
                if(i==ni && j==nj) continue;            //自分自身
                uf.merge(i*w +j, ni*w +nj);   
                //s[i][j]はi*w + j 
                //s[ni][nj]はni*w + nj　を意味する
            }
        }
    }
    
    int ans=0;
    rep(i,h)rep(j,w){
        if(s[i][j]!='#') continue;
        int v= i*w +j;
        if(uf.leader(v) == v) ans++;


    }
    cout<<ans<<endl;

    return 0;
}