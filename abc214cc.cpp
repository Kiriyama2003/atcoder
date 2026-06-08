#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <climits>  //定数LLONG_MAXを定義
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main() {
    int N;  cin>>N;
    
    // ダイクストラ法に使用する最小優先キュー
    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

    vector<ll> dist(N, LLONG_MAX);

    vector<int> S(N);
    rep(i,N) cin>>S[i];

    
    // 初期のすぬけ君の設定
    rep(i,N)rep(i,N){
        int num;    cin>>num;
        pq.push({num, i});
        dist[i]=num;
    }
    
    while (!pq.empty()) {
        auto [current_time, current_node] = pq.top();
        pq.pop();
        
        if(current_time > dist[current_node]) continue;
        

        //各点において, 次の行先は1つしかない
        int next_node = (current_node + 1) % N; //N+1のとき, 1にするため
        ll next_time = current_time + S[current_node];
        
        if (next_time < dist[next_node]) {
            dist[next_node] = next_time;
            pq.push({next_time, next_node});
        }
    }
    
    rep(i,N) cout<<dist[i]<<endl;
    
    return 0;
}
