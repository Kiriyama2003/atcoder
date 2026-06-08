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
void chmin(int& a,int b){a=min(a,b);}
int main() {
    int a,b;    cin>>a>>b;
    for(int c=0;c<=255;c++){
        if((a^c)==b){
            //if(a^c==b) これでエラー
            cout<<c<<endl;
            break;
        }
    }

    return 0;
}