#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,q;     string s;     cin>>n>>s>>q;
    //長さn文字列sに対して, Q回操作
    //t,x,c
    vector<bool> check(n);
    rep(i,n){
        if('a'<=s[i] && s[i]<='z') check[i]=0;
        else check[i]=1;
    }

    rep(i,q){
        int t,x; char c;  cin>>t>>x>>c;
        x--;
        if(t==1){
            s[x]=c;
            if('a'<=c && c<='z') check[x]=0;
            else check[x]=1;
        }
        else if(t==2){      //全部小文字に
            std::fill(all(check),0);
            //ここで, O(N)で, 全体でO(QN)=O(10^11)
            
        }else if(t==3){     //全部大文字に
            std::fill(all(check),1);
        }
    }

    rep(i,n){
        if(check[i]==0){
            if('a'<=s[i] && s[i]<='z'){
                cout<<s[i];
            }else{
                cout<<(char)('a'+s[i]-'A');
            }
        }else if(check[i]==1){
            if('A'<=s[i] && s[i]<='Z'){
                cout<<s[i];
            }else{
                cout<<(char)('A'+s[i]-'a');
            }
        }
    }

    
    return 0;
}