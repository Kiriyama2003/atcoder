#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int L,Q;    cin>>L>>Q;
    set<int> st;
    st.insert(L); st.insert(0);
    rep(i,Q){
        int c,x;  cin>>c>>x;
        if(c==1){
            st.insert(x);
        }else{
            //解法1
            auto itR=st.upper_bound(x);
            auto itL=prev(itR,1);
            cout<<*itR-*itL<<endl;

            /*解法2
            auto r=st.lower_bound(x);
            auto l=prev(r,1);
            cout<<*r-*l<<endl;
            */

            
        }
    }
    return 0;
}