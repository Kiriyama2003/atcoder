#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
using ll = long long;
int main(void){
    ll d; cin>>d;       //1<= 整数D <= 2e12


	
    ll mn = 9223372036854775807;    //2^63 -1
	for (ll x = 0; x <= (int)sqrt(d); x++){
		ll y = (int)sqrt(d - x*x);
		if (abs(x*x + y*y - d) < mn) mn = abs(x*x + y*y - d);

        //yを+1した時も確認
		y++;
		if (abs(x*x + y*y - d) < mn) mn = abs(x*x + y*y - d);
	}
	cout << mn;



    /*
    ll ans =d;
    ll y=2e6;   //D<2e12より y<2e6で十分
    for(long long x=0;x <=2e6;x++){
        while(y>0 && (x*x + y*y)>d){
            y--;
        }
        ans=min(ans,abs(x*x + y*y -d));
        ans=min(ans,abs(x*x + (y+1)*(y+1) -d));
    }
    cout<<ans<<endl;*/


    return 0;
}