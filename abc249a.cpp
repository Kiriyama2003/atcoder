#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int a,b,c,d,e,f,x;  cin>>a>>b>>c>>d>>e>>f>>x;

    int aa=(x/(a+c))*a*b + min(a,x-(int)(x/(a+c))*(a+c))*b;
    //cout<<(x/(a+c))<<" "<<(x/(a+c))*b<<min(a,x-(int)(x/(a+c))*(a+c));
    //cout<<endl<<endl;
    int bb=(x/(d+f))*d*e + min(d,x-(int)(x/(d+f))*(d+f))*e;
    
    //cout<<aa<<" "<<bb<<endl;
    if(aa>bb) cout<<"Takahashi"<<endl;
    else if(aa<bb) cout<<"Aoki"<<endl;
    else cout<<"Draw";
    

    return 0;
}