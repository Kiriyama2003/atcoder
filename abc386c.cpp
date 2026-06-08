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
int main(void){
	int k; cin>>k;
	string s,t;  cin>>s>>t;
    int sn=(int)s.size(), tn=t.size();

    deque<char> ss,tt;
    rep(i,sn){
        ss.push_back(s[i]);
    }
    rep(i,tn) tt.push_back(t[i]);

    //全く同じとき
    
    //文字数同じとき, 1文字変える
    if((int)s.size() == (int)t.size()){
        if(s==t) cout<<"Yes"<<endl;
        else{
            int cnt=0;
            rep(i,(int)s.size()) if(s[i]!=t[i]) cnt++;
            if(cnt==1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }else if(abs(sn - tn)  == 1){
        int cnt=min(sn,tn);
        while(cnt--){
            if(ss[0]==tt[0]) {
                ss.pop_front();
                tt.pop_front();
                --tn,--sn;
            }else if(tt[tn-1] == ss[sn-1]){
                ss.pop_back();
                tt.pop_back();
                --tn,--sn;
            }
        }
        if((sn==1 and tn==0) or(sn==0 and tn==1)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }else cout<<"No"<<endl;
	
	return 0;
}