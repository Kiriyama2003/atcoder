#include<bits/stdc++.h>
using namespace std;
int main() {
    long long N,Q;  string S;
    cin>>N>>S>>Q;
    vector<pair<char,char>> C;

    for(int i=0;i<Q;i++){
        char a,b;   cin>>a>>b;
        bool found = false;
        for(int j=0;j<C.size();j++){
            if(C[j].second == a ) {
                C[j].second=b;
                
            }
        }
        if(!found) {
            C.push_back(make_pair(a,b));
        }
    }

    for(int j=0;j<C.size();j++){
        if(C[j].first==C[j].second) continue;
        for(int i=0;i<S.size();i++){
            if(S[i]==C[j].first){
                S[j]=C[j].second;
            }
        }
    }
    cout<<S<<endl;
    return 0;
}