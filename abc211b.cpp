#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};


int main(){
    /*set<string> st;
    rep(i,4){ string tmp;   cin>>tmp;st.insert(tmp);}
    cout<<(st.size()==4 ? "Yes":"No")<<endl;*/

    //別解
    vector<string> s(4);
    rep(i,4) cin>>s[i];
    for(int i=0;i<(4-1);i++){
        for(int j=i+1;j<(4);j++){
            if(s[i]==s[j]){ cout<<"No"<<endl; return 0;}
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}
