#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int n,l,k;  cin>>n>>l>>k;
    vector<int> a(n);
    rep(i,n) cin>>a[i];

    //判定プロセス
    auto check=[&](int x)->bool{
        int num=0;  //何個に切れたか
        int pre=0;  //前回の切れ目

        rep(i,n){
            if(a[i]-pre >= x) num++, pre=a[i];
        }
        //最後のピース
        if(l - pre >= x) ++num;
        return (num >= k+1);
    };

    //二分探索 O(log2(L))
    int left=-1,right=l+1;
    while(left+1 != right){
        int mid = (left+right)/2;
        if(check(mid)) left=mid;
        else right=mid;
    }
    cout<<left<<endl;
    return 0;  
}