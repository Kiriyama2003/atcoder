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
    map<int,vector<ll>> vec2,vec3;
    //vec2[i] 箱iに入っているカード
    //vec3[i] カードiが入っている箱
    //自作失敗
    rep(iq,q){
        int type,i,j;   cin>>type;
        if(type==1){
            cin>>i>>j;
            vec2[j].push_back(i);
            vec3[i].push_back(j);
        }if(type==2){
            cin>>i;
            for(auto v:vec2[i]) cout<<v<<" ";
            cout<<endl;
        }if(type==3){
            cin>>i;
            for(auto v:vec3[i]) cout<<v<<" ";
            cout<<endl;
        }

    }

    return 0;
}
