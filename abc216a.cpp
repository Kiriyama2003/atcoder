#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    double num; cin>>num;
    if((num-(double)floor(num)) <= 0.2000) cout<<(int)num<<"-"<<endl;
    else if((num-(double)floor(num)) <= 0.6000) cout<<(int)num<<endl;
    else cout<<(int)num<<"+"<<endl;
    //なぜダメかわからない 精度の問題だろうが

    /*AC
    int x,y;    scanf("%d.%d",&x,&y);
    else if(y<=6) cout<<x<<endl;
    else cout<<x<<"+"<<endl;
    */
    return 0;
}