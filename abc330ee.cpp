#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int op(int a,int b){return min(a,b);}
int e(){return 1e9;}
bool f(int x){return (x>0);}

int main(){
    int n,q;  cin>>n>>q;
    vector<int> bk(n+1,0),a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=n){bk[a[i]]++;}
    }

    //長さがbk.size()で、中身がbkであるだけ
    segtree<int,op,e> seg(bk);

    rep(i,q){
        int p,x;    cin>>p>>x;  p--;

        if(a[p]<=n){
            seg.set(a[p], seg.get(a[p])-1);
            //[a[p]]に, [a[p]]の値-1を代入する
        }

        //[x]に, [x]の値+1を代入する
        if(x<=n) seg.set(x, seg.get(x)+1);

        a[p]=x;
        
        //cout<<seg.max_right<f>(0)<<endl;
        //[0,r)　rを出力する  [0,r)でfは正である

        //書き方が違うだけ
        cout<<seg.max_right(0,[](auto x){return (x>0);})<<endl;
    }
  return 0;
}