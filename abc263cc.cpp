#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n,m;    cin>>n>>m;
    vector<int> a;
    //m=表示される個数+表示されない個数
    //表示される個数
    for(int i=1;i<=n;i++) a.push_back(0);
    //表示されない個数
    for(int i=1;i<=(m-n);i++) a.push_back(1);

    do{
        for(int i=0;i<m;i++){
            //0だと表示される
            //1だと表示されない
            if(a[i]==0) cout<<i+1<<" ";
        }
        cout<<endl;
    }while(next_permutation(all(a)));


    return 0;
}