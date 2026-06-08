#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

bool f(pair<int,int> a, pair<int,int> b) {
    // 基本はfirstで比較
    if(a.first != b.first){
        return a.first > b.first; // 降順
    }
    return a.second < b.second;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,x,y,z,num;    cin>>n>>x>>y>>z;
    vector<pair<int,int>> a,b,c;
    vector<bool> check(n,false);
    rep(i,n){ cin>>num;   a.push_back(pair(num,i));}
    rep(i,n){ cin>>num;   b.push_back(pair(num,i));}
    rep(i,n){ c.push_back(pair(a[i].first+b[i].first,i));} 
    sort(all(a),f);
    sort(all(b),f);
    sort(all(c),f);


    int index=0;    //参照
    int cnt=0;      //カウント数
    while(cnt!=x){
        if(check[a[index].second]==0){
            check[a[index].second]=true;
            cnt++; index++;
        }else{
            index++;
        }
    }


    index=0;
    cnt=0;
    while(cnt!=y){
        if(check[b[index].second]==0){
            check[b[index].second]=true;
            cnt++; index++;
        }else{
            index++;
        }
    }



    index=0;
    cnt=0;
    while(cnt!=z){
        if(check[c[index].second]==0){
            check[c[index].second]=true;
            cnt++; index++;
        }else{
            index++;
        }
    }



    rep(i,n){
        if(check[i]==1){
            cout<<i+1<<endl;
        }
    }
    

    return 0;
}