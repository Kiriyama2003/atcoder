#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n,m;    cin>>n>>m;
    vector<int> a;
    rep(i,m) a.push_back(i+1); //a={1,2,3,····,m}
    set<vector<int>> ans;
    //setだから, 重複を許さない

    
    bool flag;
    do {
        flag=true;
        for(int i=0;i<n-1;i++){
            if(a[i] > a[i+1]) flag = false;
        }
        if(flag) {
            vector<int> s;
            rep(i,n) s.push_back(a[i]);
            ans.insert(s);
        }
    }while(next_permutation(a.begin(), a.end()));
    
    for(auto v:ans){
        rep(i,n) cout<<v[i]<<" ";
        cout<<endl;
    }

    /*順列だと, 上位nこが, かぶりそう　setだから良い
    do {
        vector<int> s;
        rep(i,m) s.push_back(a[i]);
        ans.insert(s);
    }while(next_permutation(a.begin(), a.end()));
    for(auto v:ans){
        rep(i,m) cout<<v[i]<<" ";
        cout<<endl;
    }*/


    return 0;
}