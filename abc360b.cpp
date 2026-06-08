#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s,t; cin>>s>>t;

    //w：文字数
    for (int w=1;w<(int)s.size();++w) {
        //c:何文字目か
        for (int c=0;c<w;++c) {
            string now="";
            //何文字目かに, 文字数を足す　文字列数以下なら
            for (int i=c;i<(int)s.size();i+=w) {
                now+=s[i];
            }
            if (now==t) {cout<<"Yes"<<endl; return 0;}
        }
    }
    cout<<"No"<<endl;

    return 0;
}