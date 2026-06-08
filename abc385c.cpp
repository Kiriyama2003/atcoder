#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(n) n.begin(), n.end()
#define rall(n) n.rbegin(), n.rend()
using P = pair<int, int>;

int main() {
    int n;  cin>>n;
    vector<int> h(n);
    rep(i,n) cin>>h[i];

    int ans = 1;

    for(int i=1;i<n;i++) {
        for(int start = 0; start < n; start++) { 
            int count = 1, current = start;
            while(current + i < n){
                if (h[current] == h[current + i]) {
                    count++;
                    current += i;
                }else break;
            }
            ans = max(ans, count);
        }
    }
    cout<<ans<<endl;
    return 0;
}
