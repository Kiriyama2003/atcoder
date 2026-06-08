#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int Q;  cin>>Q;

    /*deque<int> q;
    rep(_,Q){
        int t,x;    cin>>t>>x;
        if(t==1)        q.push_front(x);
        else if(t==2)   q.push_back(x);
        else            cout<<q[x-1]<<"\n";
    }*/

    vector<int> A(2e5+100);
    int l=100050,r=100050;

    rep(_,Q){
        int t,x;    cin>>t>>x;
        if(t==1){
            //左に追加
            l--;    //追加する前に移動するからlには数字が入っている
            A[l]=x;
            
        }else if(t==2){
            A[r]=x; //追加した後に移動するから, A[r]には数字が入っていない
            r++;
        }else{
            cout<<A[(x-1)+l]<<"\n";
        }
    }
    return 0;  
}