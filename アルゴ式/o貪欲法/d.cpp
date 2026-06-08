#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int n;  cin>>n;

    /*int now=1,cnt=1;
    while(n!=now){
        if(now*3 <=n) now*=3;
        else now+=1;
        cnt++;
    }
    cout<<cnt<<endl;
    */


    int days = 0;

    while (n>=1) {
        if (n % 3 == 0) n/=3;
        else n--;
        days++;
    }
    std::cout<<days<<endl;

    

    return 0;
}