#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,m;    cin>>n>>m;
    //n個のボールに, それぞれm本のひもを付けたもの

    //1<=i<=m ボールAiとボールBiが繋がっている
    //1<=i<=m ボールCiとボールDiが繋がっている
    vector<vector<int>> G(n),H(n);
    rep(i,m) {
        int a,b;    cin>>a>>b;
        G[a-1].push_back(b-1);  G[b-1].push_back(a-1);
    }
    rep(i,m) {
        int a,b;    cin>>a>>b;
        H[a-1].push_back(b-1);  H[b-1].push_back(a-1);
    }

    vector<int> p(n);
    rep(i,n) p[i]=i;

    do{
        bool check=true;
        vector<int> q(n);
            rep(i,n) q[p[i]]=i;
        //p=[0][1][2][3][4] を
        //   0  3  2  4  1　に
        //4を1にしている
        //1は, 本当は4である
        //Q [1]=4

        //  [0][1][2][3][4]
        //q= 0  4  2  1  3
        //q[pに対するものとの数]

        rep(i,n){
            vector<int> HH;
            //p行目について, 
            //qに入れると, pに相当するのに, 変換される
            rep(k,H[p[i]].size()) HH.push_back( q[ H[p[i]][k] ] );


            sort(all(HH));


            vector<int> GG=G[i];
            sort(all(GG));
            if(GG != HH) check=false;

        }
        if(check){ cout<<"Yes"<<endl; return 0;}

    }while(next_permutation(all(p)));
    cout<<"No"<<endl;

  return 0;
}