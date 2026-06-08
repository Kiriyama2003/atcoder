#include<bits/stdc++.h>
using namespace std;
int main() {
    long long N,Q;  string S;
    cin>>N>>S>>Q;
    
    string from,to;
    from=to="abcdefghijklmnopqrstuvwxyz";

    for(int i=0;i<Q;i++){
        char a,b;   cin>>a>>b;
        for(auto &&m:to){
            if(m == a){
                m=b;
            }
        }
    }

    for(const auto c:S){
        for(int i=0;i<26;i++){
            if(c==from[i]) cout<<to[i];
        }
    }
    cout<<endl;
    return 0;
}
