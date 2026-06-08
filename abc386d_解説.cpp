#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}
struct X{
    int x,y;
    char c;

    //sortする際に必要になる, 下のcmpのどっちかあればいい
    bool operator<(const X& other) const {
        if (x != other.x) return x < other.x;
        if (y != other.y) return y < other.y;
        return c < other.c; 
    }
};
int main(void){
    int N,M;    cin>>N>>M;
    vector<X> A(M);

    rep(i,M) {
        cin>>A[i].x>>A[i].y>>A[i].c;
        --A[i].x, --A[i].y;
    }
    auto cmp = [](const X &a, const X &b) {
        if (a.x != b.x) return a.x < b.x;
        if (a.y != b.y) return a.y < b.y;
        return a.c < b.c;
    };
    sort(all(A),cmp);

    ll min_y=1e12;
    rep(i,M){
        if(A[i].c == 'W'){
            min_y=min(min_y,(ll)A[i].y);
        }else{
            if(!(A[i].y<min_y)){
                cout<<"No\n";
                return 0;
            }
        }
    }
    cout<<"Yes\n";
    return 0;
}