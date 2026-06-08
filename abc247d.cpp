#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int q;  cin>>q;

    deque<pair<int, int>> que;

    rep(i,q){  //O(10^5)
        int query_type; cin>>query_type;

        if(query_type==1){ //O(1)
            int x,c;    cin>>x>>c;
            que.push_back(make_pair(x, c));
        }else if(query_type==2){
            int c;  cin>>c;
            ll ans=0;

            while(c>0) {
                auto [num, count] = que.front();
                que.pop_front();

                if (count<=c) {
                    ans += static_cast<long long>(num) * count;
                    c -= count;
                } else {
                    ans += static_cast<long long>(num) * c;
                    que.push_front(make_pair(num, count-c));
                    c=0;
                }
            }

            cout<<ans<<endl;
        }
    }
    

    return 0;
}