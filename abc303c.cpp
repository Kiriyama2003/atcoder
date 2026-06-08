#include<bits/stdc++.h>
#include<iostream>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,m,h,k; cin>>n>>m>>h>>k;
    string s;   cin>>s;
    //体力H, M個の回復アイテム
    //n回移動する　体力1を消費する, 体力が負になたら移動できない
    //体力がK未満なら, アイテムを消費し体力がKになる
    //倒れることなく, N回移動できるか

    //map<int,int> item;
    //map<int,int> tukaenaiitem;
    //rep(i,m){ int a,b;    cin>>a>>b;  item[a]=b;}
    set<pair<int,int>> items;
    rep(i,m){int x,y;   cin>>x>>y;  items.insert({x,y});}

    int nowx=0,nowy=0;
    
    
    bool ans=1;
    rep(i,n){
        if(s[i] == 'R')         nowx++;
        else if(s[i] == 'L')    nowx--;
        else if(s[i] == 'U')    nowy++;
        else if(s[i] == 'D')    nowy--;
        h--;
        if(h < 0) ans=0;

        if(items.count({nowx,nowy}) && h<k){
            h=k;    items.erase({nowx,nowy});
        }  
        /*if(item.count(nowx) && (item[nowx]==nowy)){
            if(!(tukaenaiitem.count(nowx) && tukaenaiitem[nowx]==nowy)){
                if(h<k) h=k;
                tukaenaiitem[nowx]=nowy;
            }
        }*/
    }
    cout<<(ans?"Yes":"No")<<endl;
    return 0;
}