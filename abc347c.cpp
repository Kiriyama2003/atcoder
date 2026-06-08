#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    ll n,a,b;   cin>>n>>a>>b;
    vector<bool>d(a+b,false);
    
    for(int i=0;i<n;i++) {
        ll num;   cin>>num;
        if(num<=a+b) d[num-1]=1;
        else d[(num%(a+b+1))]=1;
    }

    string test="";
    for(int i=0;i<a+b;i++){
        if(d[i]==true)  test+='1';
        if(d[i]==false) test+='0';
    }
    string str_a(a,'1');
    string str_b(b,'0');
    string s=str_a+str_b+str_a+str_b;

    cout<<test<<'\n'<<s;
    if(s.find(test)!=string::npos)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    cout<<s.find(test);
    
    return 0;
}