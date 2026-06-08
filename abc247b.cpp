#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<string> s(n);
    vector<string> t(n);
    map<string,int> st;

    rep(i,n){
        cin>>s[i]>>t[i];
        st[s[i]]++;     st[t[i]]++;
    }
    //for(auto a:st) cout<<a.first<<" "<<a.second<<endl;

    rep(i,n){
        if(s[i]==t[i]){
            if(st[s[i]]==2) continue;
            else cout<<"No"<<endl;
        }else if((st[s[i]]!=1 && st[t[i]]!=1)){   
            cout<<"No"<<endl; return 0;
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}