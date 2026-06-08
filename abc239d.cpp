#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
    int a,b,c,d;    cin>>a>>b>>c>>d;

    vector<bool> prime(300,true);
    prime[0]=prime[1]=false;
    for(int i=2;i<=sqrt(300);i++){
        if(prime[i]){
            for(int j=i*i;j<300;j+=i) prime[j]=false;
        }
    }

    
    ll ccnt=0;
    for(int i=a;i<=b;i++){
        bool check=false;
        for(int j=c;j<=d;j++){
            if(prime[i+j] == true) check=1; 
        }
        if(check) ccnt++;
    }
    //a~bに対して全て素数になる　ccnt==(b+1)-a Aoki勝ち
    if(b-a+1 == ccnt) cout<<"Aoki"<<endl;
    else cout<<"Takahashi"<<endl;

    return 0;
}
