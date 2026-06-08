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
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,l=1;  cin>>n;
    char a[729][730];
    rep(i,729){ rep(j,730) a[i][j]=0;}

    a[0][0]='#';

    for(int k=0;k<n;k++){
        //レベルn=0,一回も実行されない
        //レベルn=1,k=0
        //レベルn=2,k=0,1
        //レベルn=3,k=0,1,2

        //k=0,l=1　かたまりの1辺は1
        //k=1,l=3　かたまりの1辺は3
        //k=2,l=9　かたまりの1辺は9
        for(int x=0;x<3;x++){
            for(int y=0;y<3;y++){

                //1個下のレベルが残っているから, そのまま
                if(x==0&&y==0) continue;

                //9等分した真ん中,だから全部白
                if(x==1&&y==1) {
                    for(int i=0;i<l;i++){
                        for(int j=0;j<l;j++){
                            a[l+i][l+j]='.';
                        }
                    }



                }else{
                    for(int i=0;i<l;i++){
                        for(int j=0;j<l;j++){
                            a[x*l+i][y*l+j]=a[i][j];
                        }
                    }
                }
            }
        }

        l*=3;
    }
    for(int i=0;i<l;i++) cout<<a[i]<<endl;

    return 0;
}