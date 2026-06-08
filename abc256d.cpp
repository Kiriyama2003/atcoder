#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
	int n;  cin>>n;
	vector<pair<int,int>> query;

    //ログイン人数が0から1になった時刻
    //　　　　　　　1から0になった時刻　　を記録

    rep(i,n){
        int l,r;    cin>>l>>r;
		query.push_back({l,0});     query.push_back({r,1});
    }
	
	sort(query.begin(),query.end());
	
	int cnt=0;
	for(auto[t,f]:query){
		if(f==0){
			if(cnt==0) cout<<t<< ' ';
			cnt++;
		}else if(f==1){
			cnt--;
			if(cnt==0) cout<<t<<endl;
		}
	}
    return 0;
}