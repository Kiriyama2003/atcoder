#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
int main(void){
    int n,q; cin>>n>>q;

    //depueは, 先頭と末尾の両方から, 要素を追加削除できる
    //depue<int> 変数名;
    deque<pair<int,int>> pos(n);
    for(int i=0;i<n;++i) pos[i]=make_pair(i+1,0);
    //n==5のとき　pos[i]はパーツi+1
    //pos[0]==(1,0) pos[1]==(2,0) pos[2]==(3,0) pos[3]==(4,0) pos[4]==(5,0)

    for(int i=0;i<q;++i){
        int type; cin>>type;
        if(type==1){
            char c; cin>>c;
            int x=pos[0].first; int y=pos[0].second;
            if      (c=='R') x+=1;
            else if (c=='L') x-=1;
            else if (c=='U') y+=1;
            else if (c=='D') y-=1;
            pos.push_front(make_pair(x,y));
            //pos[0]を更新し　元のやつの添え字を全部+1
            pos.pop_back();
            //一番後ろを削除
        }if (type==2){
            int p; cin>>p; //パーツpの場所は　pos[p-1]だね
            cout<<pos[p-1].first<<" "<<pos[p-1].second<<endl;
        }
    }
    return 0;
}