#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
int main(void){
    int n,q; cin>>n>>q;
    vector<long long> r(n);
    for(int i=0;i<n;i++) cin>>r[i];
    sort(r.begin(),r.end());

    vector<long long> s(n+1);
    s[0] = 0;
	for (int i = 0; i<n; ++i) {
		s[i + 1] = s[i] + r[i];
	}
    //rの累積和
    //s[0]=0 
    //s[1]=r[0]
    //s[2]=r[0]+r[1]
    //s[3]=r[0]+r[1]+r[2]

    for (int i = 0; i < q; ++i) {
		long long x; cin >> x;
        //upper_bound(s.begin(),s.end(),x)　s内でxよりも大きい要素へのイテレータ
        //-s.begin() s[0]のイテレータ
        //-1　添え字が0から始まるから
		int result = upper_bound(s.begin(),s.end(),x)-s.begin()    -1;
		cout << result << endl;
	}
    
    return 0;
}