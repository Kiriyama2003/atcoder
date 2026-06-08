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
    int h,m;    cin>>h>>m;

    while(1){
        if( (h/10)*10 + m/10 <24 && (h%10)*10 + m%10 <60){
            cout<<h<<" "<<m<<endl;
            return 0;
        }
		m++;
		if(m>59) h++,m=0;
		if(h>23) h=0;
    }

    return 0;
}