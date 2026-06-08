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
    string s,ans;    cin>>s;
    
    /*TLEの実装
    //findの計算量は, 文字列sの文字数N, O(N)
    //最大N回行うから, O(N^2)
    while(s.find("ABC")!=string::npos){
        s.erase(s.find("ABC"),3);
    }
    cout<<s<<endl;*/


    for(auto c:s){
        ans+=c;
        if(ans.size()<3) continue;
        if(ans.substr(ans.size()-3) == "ABC"){
            //ans.erase(ans.end()-3,ans.end());
            //rep(i,3) ans.pop_back();
            ans.erase(ans.size()-3,3);
        }
    }
    cout<<ans<<endl;

    return 0;
}