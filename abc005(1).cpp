#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    
    int n,q,mmax=0;    cin>>n;
    vector<vector<int>> d(n+1,vector<int>(n+1,0));
    vector<vector<int>> b(n+1,vector<int>(n+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
             cin>>d[i][j];
            mmax=max(mmax,d[i][j]);
        }
    }

    /*for(auto a:d) for(auto b:a) cout<<b<<" ";
    cout<<endl;
    */



    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            b[i][j]=b[i][j-1]+d[i][j];  //行を固定
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            b[j][i]=b[j-1][i]+b[j][i]; //列を固定
        }
    }

    
    /*for(auto a:b) for(auto b:a) cout<<b<<" ";
    cout<<endl;*/

    vector<ll> val(n*n+1,0);
    val[0]=0;
    
    
    //val[i]：面積vの長方形領域の総和の最大値

    for(int x1=1;x1<n;x1++){
        for(int x2=x1+1;x2<=n;x2++){
            for(int y1=1;y1<n;y1++){
                for(int y2=y1+1;y2<=n;y2++){

                    ll area=(x2-(x1-1)) * (y2-(y1-1));
                    ll sum=b[x2][y2] -b[x1-1][y2] -b[x2][y1-1] +b[x1-1][y1-1];
                    val[area]=max(val[area],sum);
                } 
            } 
        }
    }
    val[1]=mmax;


    for(auto a:val) cout<<a<<" ";
    cout<<endl;
    for(int v=0;v<n*n;v++) val[v+1]=max(val[v+1],val[v]);


    std::cin>>q;
    rep(i,q){
        ll p;   cin>>p;
        cout<<val[p]<<endl;
    }
    return 0;
}