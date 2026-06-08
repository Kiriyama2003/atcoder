#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}
bool f(pair<int,string> a, pair<int,string> b){
        if(a.first != b.first){
            return a.first > b.first; //first降順
        }
        return a.second < b.second; //socond昇順
    }
int main() {
    string s="ABCDE";

    vector<int> point(5);
    rep(i,5) cin>>point[i];

    vector<pair<int,string>> ans;

    for(int i=1;i<(1<<5);i++){
        int tmp=0;  string ttmp="";
        rep(j,5){
            if(i & (1<<j)){
                tmp += point[j];
                ttmp+= s[j];
            } 
        }
        ans.push_back({tmp,ttmp});
    }


    sort(all(ans),f);
    rep(i,(1<<5)) cout<<ans[i].second<<endl;

    return 0;
}