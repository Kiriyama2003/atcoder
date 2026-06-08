#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n;  cin>>n;
    vector<int> a(n);
    rep(i,n) cin>>a[i];


    
 
    int cnt=0;
    while(1){
        int check=0;
        rep(i,n) if(a[i]>0) check++;
        if(check < 2) {break;}
        cnt++;
        sort(rall(a));
        a[0]--;a[1]--;

    }
    cout<<cnt<<endl;
    return 0;
}