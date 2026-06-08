#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
int main(void){
	//int n,m; cin>>n>>m;
	string s;  cin>>s;
    int q;  cin>>q;
    ll k;
    rep(i,q){
        cin>>k;     k--;
        ll soezi = k%(int)s.size();
        ll zyun = k/(int)s.size();
        zyun ++;    //(1 index)何巡目か
        ll tmp=1; 
        while(tmp < zyun) tmp*=2;

       

        ll cnt=0;
        while(true){
            if(zyun == 1 || zyun == 2) break;
            //else if(zyun <= tmp/2) tmp/=2;
            else{
                zyun -= tmp/2;
                cnt++;
                tmp /= 2;
            }
        }

        

        if(zyun == 1){
            if(cnt == 0 or cnt%2 == 0){ //偶数なら, そのまま
               cout<<s[soezi]<<" ";
            }
            else{
                cout<<(char)(islower(s[soezi]) ? toupper(s[soezi]) : s[soezi])<<" ";
            }
        }
        else{ //2なら
            if(cnt == 0 or cnt%2 == 0){     //反転
               cout<<(char)(islower(s[soezi]) ? toupper(s[soezi]) : s[soezi])<<" ";
            }
            else{       //そのまま
                cout<<s[soezi]<<" ";
            }
        }
    }
	return 0;
}