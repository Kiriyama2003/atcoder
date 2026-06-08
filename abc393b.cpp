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
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}
int main(void){
    
    string s;   cin>>s;
    int s_size=(int)s.size();
    int ans=0;
    rep(i,s_size){
        if(s[i]=='A'){
            for(int gap=1;gap<s_size;gap++){

                if(
                    (i+gap < s_size) and 
                    (i+2*gap < s_size) and
                    (s[i+gap] == 'B') and
                    (s[i+2*gap] == 'C')
                ) ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}