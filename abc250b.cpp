#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,a,b;  cin>>n>>a>>b;
    string ten(b,'.');
    string kuro(b,'#');

    for(int i=0;i<n;i++){
        for(int k=0;k<a;k++){
            for(int j=0;j<n;j++){
                if((i+j)%2==0) cout<<ten;
                else cout<<kuro;
            }
            cout<<endl;
        }
    }

    return 0;
}