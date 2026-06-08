#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()


// 補助額の総和を計算する関数
long long calculateTotalSubsidy(const vector<int>& A, int x) {
    ll total=0;
    for (int cost : A){ total += min(x,cost);}
    return total;
}

// 交通費補助額の上限額 x を最大化する関数
int maximizeSubsidy(int N,ll M,const vector<int>& A) {
    //底
    int low = 0;
    //天井
    int high = *max_element(A.begin(), A.end());
    int result = 0;
    
    //low>highになったら終了
    while (low <= high) {
        int mid=(low+(high-low))/2;
        if (calculateTotalSubsidy(A, mid)<=M) {
            // もっと大きなxを試す
            result=mid;     low=mid+1;
        } else {
            // xが大きすぎるので小さくする
            high=mid-1; 
        }
    }
    return result;
}

int main() {
    int N;  ll M;    cin>>N>>M;
    
    vector<int> A(N);
    rep(i,N) cin>>A[i];

    ll s=accumulate(A.begin(),A.end(),0LL);
    if(s<=M){ cout<<"infinite"<<endl; return 0;}
    
    int result = maximizeSubsidy(N,M,A);
    cout<<result<<endl;
    
    return 0;
}

