#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
int main(void){
    long long a,m,l,r;
    cin>>a>>m>>l>>r;
    l-=a; r-=a;     //aを基準(0)と考える
    long long result=0;


    if(l<0 && 0<r){ //L<0<R
        result= (-l)/m + r/m + 1;
        //+1は 0の分
        //(-l)/mは, l自身の棒を含む 
        //   r/mは, r自身の棒を含む
    }
    else if(l>=0){  //0<=L<=R
        result= r/m - l/m;
        //l/mは, l自身の棒を含む 
        //r/mは, r自身の棒を含む
        //差を取ると, Lのところに棒があると, 1個引きすぎているだから+1
        if(l%m ==0) ++result;
    }
    else if(r<=0){  //L<=R<=0
        result= (-l)/m - (-r)/m;
        if((-r)%m ==0) ++result;
    }
        

    cout << result << endl;
    return 0;
}