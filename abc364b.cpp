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
    int nowgyo,nowretu;  cin>>nowgyo>>nowretu;
    nowgyo--;nowretu--;
    vector<string> C(gyo);

    rep(i,gyo){
        cin>>C[i];
    }

    string s;   cin>>s;

    for(int i=0;i<(int)s.size();i++){
        if(s[i]=='R'){
            if(nowretu==retu-1) continue;
            if(C[nowgyo][nowretu+1]=='#') continue;
            nowretu++;
        }else if(s[i]=='L'){
            if(nowretu==0) continue;
            if(C[nowgyo][nowretu-1]=='#') continue;
            nowretu--;
            
        }else if(s[i]=='U'){
            if(nowgyo==0) continue;
            if(C[nowgyo-1][nowretu]=='#') continue;
            nowgyo--;
        }else{
            if(nowgyo==gyo-1) continue;
            if(C[nowgyo+1][nowretu]=='#') continue;
            nowgyo++;
        }
    }
    cout<<nowgyo+1<<" "<<nowretu+1<<endl;
    return 0;
}