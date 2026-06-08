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
int main() {
    ll n,s; cin>>n>>s;
    vector<ll> A(2*n);

    ll A_sum=0;
    rep(i,n) {
        cin>>A[i];
        A_sum += A[i];
    }
    rep(i,n) A[i+n] = A[i];

    s %= A_sum;
    //if(s==0){cout<<"Yes"<<endl;return 0;} ※1があるから大丈夫

    ll sum=0,r=0;
    bool ans=false;

    for(int l=0;l<2*n;l++){
        /*
        cout<<"l="<<l<<" ";
        //以上になったら終了
        while(r<2*n and sum < s){
            sum += A[r];
            r++;
            cout<<sum<<" ";
        }
        cout<<endl;
        if(sum == s){　　※1 while文が1回も回らない
            ans = true;
        }
        sum -= A[l];*/

        

        //解法2 while文の中に判定分を入れる　わざわざこれにする理由はない
        //以上になったら終了
        //cout<<"l="<<l<<" ";
        
        while(r<2*n and sum < s){
            
            
            sum += A[r];
            r++;
            if(sum == s){
                ans = true;
            }
        } 
        //cout<<endl;
        sum -= A[l];
        if(sum == s){
                ans = true;
        }
    }
    cout<<(ans?"Yes":"No")<<endl;
    return 0;
}