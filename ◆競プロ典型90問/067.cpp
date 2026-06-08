#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

ll f8to10(string s,ll k=8){
    //8進数を, 10進数へ
	ll ans=0;
	for(char x:s){
		ans *= k;
		ans += x-'0';
	}
	return ans;
}


ll f10to9(ll n,int k=9){
	if(n==0) return 0;
	ll result=0,place=1;
	while(n>0){
        int remainder =n%k;  //k進数の1桁目
        result += remainder*place;
        n/=k; //次の桁に進む
        place *= 10; 	
	}
	return result;
}
int main(){
    string n;   cin>>n;
    int k;  cin>>k;
    rep(_,k){
        n=to_string(f10to9(f8to10(n)));
        rep(i,(int)n.size()) if(n[i] == '8') n[i]='5';
    }
    cout<<n<<"\n";
    return 0;  
}