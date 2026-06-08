#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
	int n,m;    cin>>n>>m;
    //NxNのマス目　m個のコマ

    ll cnt=0;
    set<pair<int,int>> st;
    rep(i,m){
        int a,b;    cin>>a>>b;  a--,b--;
        if(!st.count({a,b})){
            cnt++;  st.insert({a,b});
        }
        if(0<=a+2 and a+2<n and 0<=b+1 and b+1<n and !st.count({a+2,b+1})){
            cnt++;  st.insert({a+2,b+1});
        }
        if(0<=a+1 and a+1<n and 0<=b+2 and b+2<n and !st.count({a+1,b+2})){
            cnt++;  st.insert({a+1,b+2});
        }
        if(0<=a-1 and a-1<n and 0<=b+2 and b+2<n and !st.count({a-1,b+2})){
            cnt++;  st.insert({a-1,b+2});
        }
        if(0<=a-2 and a-2<n and 0<=b+1 and b+1<n and !st.count({a-2,b+1})){
            cnt++;  st.insert({a-2,b+1});
        }
         if(0<=a-2 and a-2<n and 0<=b-1 and b-1<n and !st.count({a-2,b-1})){
            cnt++;  st.insert({a-2,b-1});
        }
        if(0<=a-1 and a-1<n and 0<=b-2 and b-2<n and !st.count({a-1,b-2})){
            cnt++;  st.insert({a-1,b-2});
        }
        if(0<=a+1 and a+1<n and 0<=b-2 and b-2<n and !st.count({a+1,b-2})){
            cnt++;  st.insert({a+1,b-2});
        }
        if(0<=a+2 and a+2<n and 0<=b-1 and b-1<n and !st.count({a+2,b-1})){
            cnt++;  st.insert({a+2,b-1});
        }
    }


    cout<<(ll)n*n-cnt<<endl;

    return 0;
}