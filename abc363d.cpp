#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
int main(){
    ll n;   cin>>n;
    if(n==1){cout<<0<<endl; return 0;}
    n--;
    for(int keta=1;;keta++) {
        ll num=9;
        int l= (keta+1)/2; //前半の桁数
        rep(i,l -1) num*=10;

        if(n > num){
            n-=num;
            continue;
        }
        
        n+= (num/9);    //nは, 新しい桁で何番目か, (num/9)は, 新しい桁のはじめ
        n-=1;           //確認すればわかるけど, 1番目は, 新しい桁であるから, -1する


        string s=to_string(n);
        string rs=s;
        reverse(all(rs));


        if(keta%2 ==1) s.pop_back();    //奇数なら
        cout<<s+rs<<endl;  return 0;
    }

    

    return 0;
}