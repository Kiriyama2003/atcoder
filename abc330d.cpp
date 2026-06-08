#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;  cin>>n;
    vector<string> s(n);

    vector<ll> bi(n,0),bj(n,0);
    //bi[i]：i=0~(n-1)  i行目における, oの数
    //bj[j]：j=0~(n-1)　j列目における, oの数

    for(int i=0;i<n;i++){
        cin>>s[i];
        for(int j=0;j<n;j++){
            if(s[i][j]=='o'){
                bi[i]++;    bj[j]++;
            }
        }
    }

    ll res=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]=='o'){
                res+=(bi[i]-1)*(bj[j]-1);
                //(bi[i]-1)：所属する行で, 自身以外の●の数
                //bj[i]-1：所属する列で, 自身以外の●の数
                //(bi[i]-1)*(bj[j]-1)：行か列でどちらかでも, 自身しかoがないと, ゼロになる
            }
        }
    }
    cout<<res<<endl;
    return 0;
}