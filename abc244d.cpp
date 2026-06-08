#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    char s1,s2,s3,t1,t2,t3;
    cin>>s1>>s2>>s3>>t1>>t2>>t3;
    int cnt=0;

    if(s1!=t1) cnt++;
    if(s2!=t2) cnt++;
    if(s3!=t3) cnt++;

    //cnt ：　違う個数

    //cntは, 0 or 2 or 3
    //o or 3　は0回か2回で　治せる　 
    if(cnt==0 || cnt==3) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;






    return 0;
}
