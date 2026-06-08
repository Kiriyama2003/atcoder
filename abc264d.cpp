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
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);

    string s;   cin>>s;
    map<string,int> mp;
    queue<string>q;

    mp[s]=0;        q.push(s);

    while(!q.empty()){
        string current=q.front();       q.pop();
        if(current=="atcoder"){
            cout<<mp[current]<<endl;    return 0;
        }
        for(int i=1;i<7;i++){
            string next=current;
            swap(next[i-1],next[i]);

            //nextがmpに存在しなければ
            if(mp.find(next) == mp.end()){
                q.push(next);
                mp[next]=mp[current]+1;
            }
        }
    }

    

    return 0;
}