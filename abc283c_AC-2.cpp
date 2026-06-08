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
    string s;   cin>>s;

    vector<ll>zero;     ll cnt=0;   ll num=0;
    for(ll i=0;i<s.size();i++){
        if(num==0){
            if(s[i]=='0') num=1;
            else ++cnt;
        }else {
            if(s[i]=='0') ++num;
            else { zero.push_back(num); num=0; cnt++;}
        }
        if(i==(s.size()-1)) {
            if(num!=0) zero.push_back(num);
        }
    }


    ll sum=cnt;
    for(ll i=0;i<zero.size();i++){
        if(zero[i]%2==0) sum+=(zero[i]/2);
        else sum+= (zero[i]/2) +1;
    }
    cout<<sum<<endl;



    return 0;
}