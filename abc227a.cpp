#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,k,a;  cin>>n>>k>>a;
    /*k--;
    while(k>0){
        
        k--; 
        a++; a%=(n+1);
        if(a==0) a++;
    }
    cout<<a<<endl;*/

    int num=((a+k)-1) %(n);
    if(num==0) cout<<n<<endl;
    else cout<<num<<endl;
    return 0;
}