#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int a[3][3];
    rep(i,3) rep(j,3) cin>>a[i][j];


    rep(i, 2) {
        if (a[i][0] - a[i+1][0] != a[i][1] - a[i+1][1]
            || a[i][1] - a[i+1][1] != a[i][2] - a[i+1][2]) {
            cout<<"No"<<endl;
            return 0;
        }
    }

    rep(j, 2) {
        if (a[0][j] - a[0][j+1] != a[1][j] - a[1][j+1] || a[1][j] - a[1][j+1] != a[2][j] - a[2][j+1]) {
            cout<<"No"<<endl;
            return 0;
        }
    }

    cout<<"Yes"<<endl;
    return 0;
}
