#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int Q;    cin>>Q;
    priority_queue<int,vector<int>,greater<int>> q;
    queue<int> qq;
    rep(qi,Q){
        int type,x;   cin>>type;
        if(type==1){        //要素追加
            cin>>x; qq.push(x);
        }else if(type==2){  //先頭の要素を出力し削除
            if(q.size()){
                cout<<q.top()<<endl;    q.pop();
            }else{
                cout<<qq.front()<<endl; qq.pop();
            }
        }else{              //ソートする
            while(qq.size()){
                q.push(qq.front());
                qq.pop();
            }
        }
    }
    return 0;
}