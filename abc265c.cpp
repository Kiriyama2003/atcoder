#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int gyo,retu;   cin>>gyo>>retu;
    vector<string> s(gyo);
    rep(i,gyo) cin>>s[i];

    pair<int,int> now={0,0};
    ll cnt=0;
    while(1){
        if(s[now.first][now.second]=='R'){
            if(now.second==retu-1) break;
            now.second++;
        }else if(s[now.first][now.second]=='L'){
            if(now.second==0) break;
            now.second--;
        }else if(s[now.first][now.second]=='U'){
            if(now.first==0) break;
            now.first--;
        }else{
            if(now.first==gyo-1) break;
            now.first++;
        }
        cnt++;
        if(cnt==2e8) {
            cout<<-1<<endl;
            return 0;
        }
    }
    cout<<now.first+1<<" "<<now.second+1<<endl;
    return 0;
}