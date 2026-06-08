#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);


    int n;cin>>n;
    string s="a";
    bool check=1;
    rep(i,n-1){
        string ss;  cin>>ss;
        if(s=="sweet" && s==ss) {
            check=0;
            break;
        }
        s=ss;
    }
    cout<<(check?"Yes":"No")<<endl;
    

    return 0;
}