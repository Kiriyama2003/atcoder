#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int main(){
    string s;   cin>>s;
    if((int)s.size()==1 or (int)s.size()==2){cout<<0<<endl; return 0;}

    //以下全部0-index

    //t[i][x]  (0<=x<=25)
    //t[i] s[i]を含まない, 添字i以下の文字列の, 各文字の個数
    //s=abcd
    //t={{0,0,0,0},{1,0,0,0},{1,1,0,0},{1,1,1,0},{1,1,1,1}};
    vector<map<int,int>> t((int)s.size()+2);
    for(int i=1;i<=(int)s.size();i++){
        t[i]=t[i-1];
        t[i][s[i-1]-'A']++;
    }

    ll ans=0;
    for(int i=1;i<=(int)s.size()-2;i++){
        for(int j=0;j<26;j++){
                int left=t[i][j];
                int right=t[(int)s.size()][j] - t[i+1][j];
                ans += (ll)left*right;
        }
    }
    cout<<ans<<endl;


    return 0;
}