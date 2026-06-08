#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;

using mint = modint1000000007;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    // int n=5,s=11;
    // vector<int> a={1,2,3,4,5};
    // int r=0,sum=0,ans=1E9;
    // pair<int,int> p;

    // for(int l=0;l<n;l++){
	//     while(r<n && sum <s){
	// 	    sum += a[r]; 
    //         r++;
	// 	}
    //     if(sum >= s){
    //         if(ans > r-l){
    //             ans = min(ans, r - l);
    //             p={l,r};
    //         }
    //     } 
	// 	sum-=a[l];
	// }
    
    // cout<<"i={";
    // while(p.first!=p.second) cout<<p.first++<<" ";
    // cout<<"}"<<endl;

	// cout<<ans<<endl;

    // ac-libを確認
    mint a = 9;   
    a += 1000000000;

    cout << a.val() << endl;
    return 0;
}