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
    int n,q;    string s;   cin>>n>>q>>s;
    //長さnの文字列s

    int ans=0;
    for(int i=0;i<=(n-3);i++){
        if(s[i]=='A' and s[i+1]=='B' and s[i+2]=='C') ans++;
    }

    while(q--){
        int x;  char c;   cin>>x>>c; x--;
        //Sの整数x番目の文字を 文字cに置き換える
        

        for (int i =x-2;i<=x;++i) {
            if(i < 0) continue;
            if(i > n-3) continue;

            if(s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') --ans;
        }

        s[x]=c;

        for (int i =x-2;i<=x;++i) {
            if(i < 0) continue;
            if(i > n-3) continue;
            if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') ++ans;
        }
        cout<<ans<<endl;
    }


    return 0;
}