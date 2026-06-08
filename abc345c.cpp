#include<bits/stdc++.h>
using namespace std;
using ll =long long;

ll c2(ll n){
    return n*(n-1)/2;
}

int main(void){
    string s;   cin>>s;
    int n=s.size();
    

    map<char,int>cnt;
    for(char c:s) cnt[c]++;

    ll same=0;
    for(auto p:cnt){
        //mapのsecond 
        int m=p.second;
        //0なら0 1なら0 2なら1
        same+=c2(m);
    }

    ll diff=c2(n)-same;
    ll ans=diff;

    //文字の被りが1つでもあると　初期の文字列があるから
    if(same>=1) ans++ ;
    
    cout<<ans<<endl;
    return 0;
}