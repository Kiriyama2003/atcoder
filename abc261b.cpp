#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;  cin>>n;
    vector<string> s(n);
    rep(i,n) cin>>s[i];

    bool check=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if((s[i][j]=='W' && s[j][i]=='L')) {
                continue;
            }else if(s[i][j]=='L' && s[j][i]=='W'){
                continue;
            }else if(s[i][j]=='D' && s[j][i]=='D'){
                continue;
            }
            check=0;
        }
    }

    cout<<(check?"correct":"incorrect")<<endl;
    return 0;
}