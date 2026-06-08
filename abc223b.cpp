#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    string s;   cin>>s;
    /*int num=s.size();
    int ma=-1,mi=1000000;
    for(int i=0;i<num;i++){
        string a;
        rep(k,s.size()) a+=s[(k+i)%num];

        for(int j=0;j<num;j++){
            if(i==j) continue;
            string b;
            rep(l,s.size()) b+=s[(j+l)%num];

            

        }
    }*/
    vector<string> v;
    rep(i,s.size()) v.push_back(s.substr(i,s.size()-i)+s.substr(0,i));
    cout<<*min_element(all(v))<<endl;
    cout<<*max_element(all(v))<<endl;

    return 0;
}