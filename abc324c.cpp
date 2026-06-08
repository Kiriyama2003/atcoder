#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()

//ハミング距離  文字列tと文字列sの違う箇所の個数
int ham(string& s,string&t ){
    if(s.size()!=t.size()) return 999;
    int res=0;
    rep(i,s.size()) if(s[i]!=t[i]) res++;
    return res;
}
//部分列かどうか
bool f(string&s,string&t){
    if(s.size()!=t.size()+1) return false;
    int si=0;         //siは, カーソルの位置
    rep(ti,t.size()){   //ti　部分列の位置を, 進める
        while(si<s.size() && s[si] != t[ti]){
            si++;  //カーソルの位置に, 値がなかったら, カーソルを進める
        }
        if(si==s.size()) return false;
        si++;       //カーソルを進める
    }
    return true;
}


int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
   
    ll n;   cin>>n;                 //<=5e5
    string t_rec;  cin>>t_rec;      //|t_rec|<=5e5
    
    //1 等しい                              サイズ±0
    //2 いずれかの位置に, 英小文字を挿入        サイズ+1   t_recから1文字削除
    //3 1文字削除　           サイズ-1    長さの判定をした後に, t_recが sの部分列かどうか
    //4 1文字変更                           サイズ±0
    vector<int>ans;
    rep(i,n){
        string s;   cin>>s;
        bool ok=false;
        if(s.size()+1 >= t_rec.size()){
            if(s==t_rec) ok=true;
            if(f(s,t_rec)) ok=true;  
            if(f(t_rec,s)) ok=true;
            if(ham(s,t_rec) <=1) ok=true;
        }
        if(ok==1) ans.push_back(i+1);
    }


    cout<<ans.size()<<endl;
    for(int i:ans) cout<<i<<" ";
    cout<<endl;
    return 0;
}