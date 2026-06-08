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

    int n,k;    cin>>n>>k;
    //小文字から成る文字列(長さN)
    string s;   cin>>s;


    //文字列sを並び替えた文字列のうち, 長さKの回文を部分文字列として, 含まない文字列の個数

    vector<int> a;   int ans=0;  bool ok,flag;
    rep(i,n) a.push_back((int)(s[i]-'a'));
    sort(all(a));
    
    while(true){
        //それぞれの文字列において
        ok=true;    //okは毎回1にする
        //回文チェックの範囲をずらしていていく
        //N-Tは, 最初の回文チェックに含まれない
        //1+(N-T)個, 回文チェックする範囲がある
        
        for(int i=0;i<=n-k;i++){
            //ある文字列の, ある範囲において
            flag=true;

            //j=0~(k-1)　回文を構成する文字数, k文字分
            //回文の何文字目か　j=0は, 最初の文字と最後の文字
            //j=1は, 1文字目と最後から1文字前
            //だから, (+1と-1)==(+jと-j)
            for(int j=0;j<k;j++){
                if(a[(i)+j]!=a[(i+(k-1))-j]) flag=false;
                //1回でも違ったら, flagをflaseに
            }
            //回文成立しない回数が答えだから, 
            //回文が1回でもあれば, ok=falseにする
            if(flag==1) ok=false;
        }

        if(ok==1) ans++;    //okが, 1のままなら, ans++
        if(!next_permutation(all(a))) break;
    }
    cout<<ans<<endl;
    return 0;
}