#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n; cin>>n;
    vector<ll>a;
    int now=-1;
    
    for(int i=0;i<n;i++){
        ll num; cin>>num;
        //unsigned long long log=1;
        //log=log<<num;
        a.push_back(num);
        now++;

        auto check=[&a,&now](){
            ll tmp=a[now];
            a.pop_back();
            a.pop_back();
            a.push_back(tmp+1);
            now--;
        };
        
        while(a[now]==a[now-1]){
            check();
            if(now==0 || now==-1){
                break;
            }
        }
        
    }
    std::cout<<now+1<<endl;
    return 0;
}