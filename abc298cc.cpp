#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;    cin>>n>>q;
    //番号1~nの箱
    //1 i j 数iを書き, 箱jにいれる
    //2 i   箱iに入ってるカードを昇順でのべる
    //3 i   数iが描かれたカードが, 入っている箱の番号を昇順で述べる
    vector<vector<int>> box(200010,vector<int>()),card(200010,vector<int>());


    while(q--){
        int t;  cin>>t;
        if(t == 1){
            int i,j;    cin>>i>>j;
            card[i].push_back(j);
            box[j].push_back(i);
        }else if(t==2){
            int i;  cin>>i;
            sort(all(box[i]));
            for(auto v:box[i]){cout<<v<<" ";} cout<<endl;
            //for(int j=0;j<box[i].size();j++) cout<<box[i][j]<<" ";
            
        }else if(t==3){
            int i;  cin>>i;
            sort(all(card[i]));
			card[i].erase(unique(all(card[i])), card[i].end());
            for(auto v:card[i]){cout<<v<<" ";} cout<<endl;
        }
    }
    return 0;
}
