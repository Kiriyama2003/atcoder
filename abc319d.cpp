#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,m;    cin>>n>>m;
    //m行に抑えたい

    //n個の単語の, 文字数
    vector<ll> L(n);
    ll L_max=0;
    rep(i,n){ 
        cin>>L[i];  L[i]++; //先頭に空白をつけておく
        L_max=max(L_max,L[i]);
    }

    ll lower=L_max-1;                 //1行の文字数は, max(L[i])以上
    ll upper=accumulate(all(L),0LL);       //1行の文字数は, ΣL[i]以下
    //cout<<lower<<" "<<upper<<endl;

    while(lower+1 < upper){
        ll middle=(lower+upper)/2;
        
        int rows=1;     //今の行数
        ll length=0;   //先頭から何文字目か
        for(int i=0;i<n;i++){
            length+=L[i];
            if(length >middle){
                rows++;
                length=L[i];
            }
        }
        if(rows > m) lower=middle;      //縦幅が足りていない
        if(rows <= m) upper=middle;     //縦幅が足りている
    }
    cout<<lower<<endl;
    
    return 0;
}