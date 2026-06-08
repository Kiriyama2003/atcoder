#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ll n;   cin>>n;

    //解法1 私のゴミコード
    /*if(n%2==0){ //偶数
        cout<<"A";
        rep(i,(n)/2) cout<<"B";
        cout<<endl;
    }else{      //奇数
        cout<<"A";
        rep(i,(n-1)/2) cout<<"B";
        cout<<"A"<<endl;
    }*/

   //解法2
   string ans;
    while(n > 0){
        if( (n%2) == 1){ans +='A'; n--;}
        else{ ans +='B'; n /= 2;}
    }
    reverse(all(ans));
    cout<<ans<<endl;

    //解法3
    /*ll n;   cin>>n;
    const ll len=60;
    auto a = bitset<len>(n);
    string ans(len,'B');    //Bで埋める
    for(ll i=len-1;i>=0;i--){
        if(a[i]==1) ans.insert(ans.size()-i,"A");
    }
    cout<<ans<<endl;*/


    return 0;

}
