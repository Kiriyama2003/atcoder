#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  cin>>n;
    vector<vector<bool>> G(n,vector<bool>(n,false)),H(n,vector<bool>(n,false));

    int G_sides,H_sides,v,u;   cin>>G_sides;
    rep(i,G_sides){
        cin>>v>>u; v--,u--;
        G[v][u]=true;  G[u][v]=true;
    }

    cin>>H_sides;
    rep(i,H_sides){
        cin>>v>>u; v--,u--;
        H[v][u]=true;  H[u][v]=true;
    }

    vector<int> p(n);
    rep(i,n) p[i]=i;

    vector<vector<int>> a(n,vector<int>(n));

    rep(i,n) for(int j=i+1;j<n;j++) {
        cin>>a[i][j];
        a[j][i]=a[i][j];
    }
    //i=0 {1,2,3,4}
    //i=1 { ,2,3,4}
    //i=2 {   ,3,4}
    //i=3 {     ,4}
    //i=4 {       }
 
    ll ans = 3e16;

    do{
        ll now=0;
        //これでもいい
        //rep(i,n) for(int j=i+1;j<n;j++) if(H[i][j] != G[p[i]][p[j]]) now +=a[i][j];


        rep(i,n) rep(j,i){
            if(H[i][j] != G[p[i]][p[j]]) now +=a[i][j];
        }
            //i=0 j={}
            //i=1 j={0}
            //i=2 j={0,1}
            //i=3 j={0,1,2}
            //i=4 j={0,1,2,3}

        ans=min(ans,now);
    }while(next_permutation(all(p)));
    cout<<ans<<endl; 
    return 0;
}