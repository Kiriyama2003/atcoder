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
    int n;    cin>>n;
    vector<int> event;
    rep(i,n) {
        int t,x;    cin>>t>>x;
        if(t == 1) event.push_back(x);
        else event.push_back(-x);
    }

    reverse(all(event));
    vector<int> cnt(n+1),ans;
    int now = 0, mx = 0;    //now:=現在の敵のたまっている数　mx:=nowのmax値
    for(int x : event) {
        //拾うとき
        if (x > 0) {
            if(cnt[x]) {
                cnt[x]--;
                now--;
                ans.push_back(1);
            } else ans.push_back(0);
        }
        //敵と遭遇
        else cnt[-x]++,now++;
        mx = max(mx, now);
    }

    //now>0 とは　敵が残っていることを示す
    if (now > 0) cout<<-1<<endl;
    else {
        cout<<mx<<endl;
        reverse(all(ans));
        for(int x : ans){cout << x << ' ';} cout << endl;
    }
    return 0;
}