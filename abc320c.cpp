#include<bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using ll =long long;
using P=pair<int,int>;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    int m;  cin>>m;
    vector<string> s(3);
    rep(i,3) cin>>s[i];

    rep(i,3) s[i]+=(s[i]+=s[i]);
    
    vector<int> a={0,1,2};
    int ans=1000;
    do{
        rep(i,9){   //数字jを揃える
            int tmp=-1,now=0;
            bool check=false;

            rep(j,3){   //リール
                while(true){
                    if(s[a[j]][(now)]==(char)i+'0'){
                        tmp =max(tmp,now);
                        now++; break;
                    }
                    now++;
                    if(now>4*m){check=true; break;}
                }
            }
            if(check) continue;  //☆1
            else ans=min(ans,tmp);
        }
    }while(next_permutation(all(a)));

    if(ans==1000) cout<<-1<<endl;   //1回も☆1を, 通過できなかったら
    else cout<<ans<<endl;

    return 0;
}