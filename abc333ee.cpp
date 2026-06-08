#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int N; cin>>N;

    // ポーションのタイプ -> {いつ拾ったか, 何本目のポーションか}
    vector<stack<pair<int,int>>> potion_holder(N);  //[first]に拾い, secondはtype==1の内何番目か※2があるから

    // potion_result[i] := i 番目のポーションを拾う ⇔ true
    basic_string<bool> potion_result;
    // ∑_{j≤i}occupied_imos[j] := i 番目の出来事の時点で持っているポーションの本数
    vector<unsigned> occupied_imos(N);

    for(int turn = 0; turn < N; ++turn) {
        int event_type; cin>>event_type;
        if(event_type == 1) { // ポーションを発見したら
            int potion_type;    cin>>potion_type;   --potion_type;
            potion_holder[potion_type].emplace(turn, size(potion_result)); // とりあえず拾い
            potion_result += false; // 一旦使わないと思っておく //※2

        } else { // モンスターと遭遇したら
            int monster_type;   cin>>monster_type;  --monster_type;
            // 使えるポーションがなければ
            if(empty(potion_holder[monster_type])) { 
                cout<<"-1"<<endl;   return 0;
            }
            // 使えるポーションがあれば
            const auto&[t, i]{potion_holder[monster_type].top()}; // 最後に拾ったものを使う
            ++occupied_imos[t], --occupied_imos[turn];
            potion_result[i] = true;
            potion_holder[monster_type].pop();
        }
    }

    // imos法をする
    inclusive_scan(all(occupied_imos),begin(occupied_imos));

    // 必要な最大本数
    cout<<*max_element(all(occupied_imos))<<endl;

    // それぞれのポーションを拾うか出力する
    for(auto result : potion_result){ cout<<result<<" ";} cout<<endl;
    return 0;
}