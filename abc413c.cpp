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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int Q;  cin>>Q;
    deque<pair<ll, ll>> dq;

    rep(i, Q) {
        int t;  cin>>t;
        if(t == 1){
            ll c,x; cin>>c>>x;
            dq.push_back({x,c});
        }else{
            ll k;   cin>>k;
            ll sum = 0;
            while(k > 0){
                auto [x, c] = dq.front();
                dq.pop_front();
                if(c <= k){
                    sum += x * c;
                    k -= c;
                }else{
                    sum += x * k;
                    dq.push_front({x, c - k});
                    k = 0;
                }
            }
            cout<<sum<<'\n';
        }
    }
    return 0;
}


// struct three{
//     int type;
//     int cnt;
//     int x;
// };
// int main(void){
    
//     ll type1_cnt=0;
//     int Q;  cin>>Q;
//     vector<three> vec(Q);
//     rep(i,Q){
//         int type;   cin>>type;
//         if(type==1){
//             ll cntt,xx;   cin>>cntt>>xx;
//             vec[i].type = 1;
//             vec[i].cnt = cntt;
//             vec[i].x = xx;
//             type1_cnt += 1;
//         }else{
//             ll cnt; cin>>cnt;
//             vec[i].type=2;
//             vec[i].cnt=cnt; 
//         }
//     }

//     vector<ll> ct(type1_cnt+1),goke(type1_cnt+1);
//     ct[0]=0,goke[0]=0;
//     ll now=0;
//     for(int i=1;i<=type1_cnt;i++){
//         while(vec[now].type==2) now++;
//         if(i!=1){
//             ct[i] = ct[i-1] + vec[now].cnt;
//             goke[i]
//                 = goke[i-1] + vec[now].x * vec[now].cnt;
//         }
//         else{
//             ct[1]=vec[now].cnt;
//             goke[1]=vec[now].x*vec[now].cnt;
//         }
//         now++;
//     }
    
//     // for(auto a:ct){
//     //     cout<<a<<" ";
//     // }
//     // cout<<endl;
//     // for(auto a:goke){
//     //     cout<<a<<" ";
//     // }
//     ll curr_cnt,curr_x=0;
//     rep(i,Q){
//         if(vec[i].type==2){
//             int mondai = vec[i].cnt;
//             curr_cnt+=mondai;


//         }
//     }
    
// 	return 0;
// }