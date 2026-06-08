#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<string> a(n);
    rep(i,n) cin>>a[i];

	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++) {
            int cnt;
            //i行目j列目に右, 下, 右斜め下, 左斜め下で考える

            //i,jを起点に右
			if((i+6) <= n){
				cnt = 0;
				for(int k=0;k<6;k++) if(a[i+k][j] == '#') cnt++;
				if(cnt>=4){cout<<"Yes"<<endl; return 0;}
			}
            
            //i,jを起点に下
			if((j+6) <= n) {
				cnt = 0;
				for(int k=0;k<6;k++) if(a[i][j+k] == '#') cnt++;
				if(cnt>=4){cout<<"Yes"<<endl; return 0;}
			}

            //i,jを起点に, 右斜め下
			if(((i+6) <= n) && ((j+6) <= n)) {
				cnt = 0;
				for(int k=0;k<6;k++) if(a[i+k][j+k] == '#') cnt++;
				if(cnt>=4){cout<<"Yes"<<endl; return 0;}
			}
            //i,jを起点に, 左斜め下
			if((-1 <= (i-6)) && ((j+6) <= n)) {
				cnt = 0;
				for(int k=0;k<6;k++) if(a[i-k][j+k] == '#') cnt++;
				if(cnt>=4){cout<<"Yes"<<endl; return 0;}
			}
		}
	}

    cout<<"No"<<endl;
    return 0;
}
