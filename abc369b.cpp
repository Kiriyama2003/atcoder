#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<int> L,R;
    rep(i,n){
        int num;char type;   cin>>num>>type;
        if(type=='L') L.push_back(num);
        else if(type=='R') R.push_back(num);
    }
    //s：  L R

    ll ans=0;
    if(!L.empty()){
        int l=L[0];
        rep(i,L.size()){
            ans+=(abs(l-L[i]));
            l=L[i];
        }
    }
    if(!R.empty()){
        int r=R[0];
        rep(i,R.size()){
            ans+=(abs(r-R[i]));
            r=R[i];
        }
    }
    

    cout<<ans<<endl;


    return 0;
}