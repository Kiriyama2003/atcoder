#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
int main(void){
	int n;  cin>>n;

    vector<int> a(n);
    rep(i,n) cin>>a[i];

    int ans=0;
    rep(si,2) {
        //si=0,1
        vector<int> cnt(n+1);
        int r = si;

        for(int l = si; l+1<n; l+=2) {
            while (r+1 < n) {
                //そもそも合わないなら
                if (a[r] != a[r+1]) break;
                //既出なら
                else if(cnt[a[r]]) break;
                //既出でもなく, 隣同士が等しいなら
                else{
                    cnt[a[r]]++;
                    r += 2;
                }
            }
            ans = max(ans, r-l);

            if(l == r) r += 2;
            else cnt[a[l]]--;
        }
    }

    cout<<ans<<endl;
    return 0;
}