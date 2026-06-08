#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
class SegmentTree{
    public:
    int dat[300000];
    int siz=1;

    
    void init(int N){
        siz=1;
        while(siz<N) siz*=2;
        for(int i=i;i<siz*2;i++) dat[i]=0;
    }

    void update(int pos,int x){
        pos = pos+siz-1;
        dat[pos]=x;
        while(pos>=2){
            pos/=2;
            dat[pos]=max(dat[pos*2], dat[pos*2 +1]);
        }
    }

    int query(int l,int r,int a,int b,int u){
        if(r<=a or b<=l) return -10000000;
        if(l<=a and b<=r) return dat[u];
        int m=(a+b)/2;
        int answerL=query(l,r,a,u,u+2);
        int answerR=query(l,r,m,b,u*2+1);
        return max(answerL,answerR);
    }
};
int main(){
    int n,q;    cin>>n>>q;

    return 0;
}