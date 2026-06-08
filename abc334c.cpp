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
int main(void){
    int n,k;    cin>>n>>k;
    vector<int> a(k);
    set<int> s;
    rep(i,k){ cin>>a[i]; s.insert(a[i]);}

    if((k%2) == 0) {
        ll ans=0;

        vector<int> st;
        rep(i,n){
            if(s.count(i+1)) st.push_back(i);
            else st.insert(st.end(),2,i);
            //st.end()に, 2こ, iを挿入する
        }
        for(int i=0;i<((2*n - k)/2);i+=2){
            ans += abs(st[i]-st[i+1]);
        }
        cout<<ans<<endl;
        return 0;
    }else{

    }



    return 0;
}