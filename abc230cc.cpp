/*#include <bits/stdc++.h>
using namespace std;
int main(void) {
	long long n, a, b;
	long long p, q, r, s;
	cin >> n >> a >> b;
	cin >> p >> q >> r >> s;
	for (long long i = p; i <= q; i++) {
		for (long long j = r; j <= s; j++) {
			if ((i - j) == (a - b))cout << '#';
			else if ((i + j) == (a + b))cout << '#';
			else cout << ".";
		}
		cout << endl;
	}
	return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n,a,b,p,q,r,s;       cin>>n>>a>>b>>p>>q>>r>>s;

    for(ll i=p;i<=q;i++) {
        for(ll j=r;j<=s;j++) {
            
            
            // 1. 条件1: i - a == j - b (=> i = a + k, j = b + k)
            if(i-a==j-b && max(1-a,1-b) <= i-a && i-a <= min(n-a,n-b)) cout<<'#';


            // 2. 条件2: i - a == b - j (=> i = a + k, j = b - k)
            else if(i-a == b-j && max(1 - a, b - n) <= i - a && i - a <= min(n - a, b - 1)) cout<<'#';
            else cout<<'.';
        }
        cout << endl;
    }
    return 0;
}
