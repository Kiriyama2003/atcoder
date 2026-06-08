#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

vector<pair<char,int>> runLengthEncoding(string s) {
    int n=s.length();
    vector<pair<char,int>> res;
    char pre=s[0];  //前の文字と比較するため
    int cnt = 1;
    for(int i=1;i<n;i++) {
        if (pre!=s[i]) {
            res.push_back({pre,cnt});
            pre=s[i];
            cnt=1;  //cntを1にリセットする
        }
        else cnt++;
    }

    res.push_back({pre,cnt});
    return res;
}

string S,T;
string slove(){
    auto vs=runLengthEncoding(S);
    auto vt=runLengthEncoding(T);
    if(vs.size()!=vt.size()) return "No";

    int N=vs.size();
    for(int i=0;i<N;i++){
        if(vs[i].first != vt[i].first)      return "No";
        if(vs[i].second > vt[i].second)     return "No";
        if(vs[i].second==1 && 1<vt[i].second)   return "No";
    }
    return "Yes";
}

int main(){
    cin>>S>>T;
    cout<<slove()<<endl;;
    return 0;
}