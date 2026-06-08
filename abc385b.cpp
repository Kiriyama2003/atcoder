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

void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}
int main(void){
	int h,w,x,y; cin>>h>>w>>x>>y;
    x--,y--;
    vector<string> s(h);
    rep(i,h) cin>>s[i];
	string t;  cin>>t;

    int cnt=0;
    rep(i,(int)t.size()){
        if(t[i]=='L'){
            int nx=x, ny=y-1;
            if(!(nx <0 or nx>=h or ny<0 or ny>=w)){
                if(!(s[nx][ny]=='#')){
                    x=nx,y=ny;
                if(s[nx][ny]=='@') cnt++,s[nx][ny]='.';
                }
            }
        }else if(t[i]=='U'){
            int nx=x-1, ny=y;
            if(!(nx <0 or nx>=h or ny<0 or ny>=w) ){
                if(!(s[nx][ny]=='#')){
                    x=nx,y=ny;
                if(s[nx][ny]=='@') cnt++,s[nx][ny]='.';
                }
            }
        }else if(t[i]=='R'){
            int nx=x, ny=y+1;
            if(!(nx <0 or nx>=h or ny<0 or ny>=w) ){
                if(!(s[nx][ny]=='#')){
                    x=nx,y=ny;
                    if(s[nx][ny]=='@') cnt++,s[nx][ny]='.';
                }
            }
        }else if(t[i]=='D'){
            int nx=x+1, ny=y;
            if(!(nx <0 or nx>=h or ny<0 or ny>=w)  ){
                if(!(s[nx][ny]=='#')){
                    x=nx,y=ny;
                    if(s[nx][ny]=='@') cnt++,s[nx][ny]='.';
                }  
            }
        }
    }
	cout<<x+1<<" "<<y+1<<" "<<cnt<<endl;
	return 0;
}