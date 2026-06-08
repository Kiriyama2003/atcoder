#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(void){
    int n,l,r;
    cin>>n>>l>>r;
    vector <int> a(n);
    vector <int> b(n);
    rep(i,n) cin>>a[i];

    //そのまま書くとこれだが、タイムアウト
     for(int i=0;i<n;i++){
        int k=100000,kk=0;
        for(int j=l;j<=r;j++){
            if(abs(j - a[i]) <k) {
                k=abs(j - a[i]);
                kk=j;
            }
            b[i]=kk;
        }  
    }


    
    for(int i=0;i<n;i++){
        if(a[i]>r) b[i]=r;
        if(a[i]<l) b[i]=l;
        if(l<=a[i] && a[i]<=r) b[i]=a[i];
    }
    

    rep(i,n) cout<<b[i]<<" ";
    return 0;
}