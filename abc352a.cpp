#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define ALL(n) n.begin(),n.end()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;cin>>n;
    int x,y,z; cin>>x>>y>>z;
    if(x>y){
        for(int i=x;i>y;i--){
            if(i==z){
                cout<<"Yes"<<endl;
                return 0;

            }
        }
    }else{
        for(int i=x;i<y;i++){
            if(i==z){
                cout<<"Yes"<<endl;
                return 0;

            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}