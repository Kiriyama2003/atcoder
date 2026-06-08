#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    
    int N,Q;   cin>>N;
    vector<ll> a(N);
    rep(i,N) cin >> a[i];
    sort(all(a));

    cin>>Q;
    while(Q--){
        ll x;   cin>>x;
        
        int left = 0, right = N;
        // left < right で探索を継続
        //leftの左は未満　右は以上
        //right 左：以下　右：超え
        while(left+1 != right){
            int mid = (left + right) / 2;
            //x未満なら　leftを進める
            if(a[mid] < x){
                left = mid;
            }else right = mid;
        }
    
        ll ans = LLONG_MAX;
        ans = min(ans, llabs(a[left] - x));

        if(right != N){
            ans = min(ans, llabs(a[right] - x));
        }
        
        cout << ans << "\n";
    }




    return 0;  
}