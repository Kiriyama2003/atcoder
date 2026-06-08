//まずは全探索, 安定のTLE

#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}

int main(){
    int n;  cin>>n;
    string s;   cin>>s;
    ll cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            for(int j=i+1;j<n;j++){
                if(s[j]=='t'){
                    for(int k=j+1;k<n;k++){
                        if(s[k]=='c'){
                            for(int l=k+1;l<n;l++){
                                if(s[l]=='o'){
                                    for(int m=l+1;m<n;m++){
                                        if(s[m]=='d'){
                                            for(int N=m+1;N<n;N++){
                                                if(s[N]=='e'){
                                                    for(int o=N+1;o<n;o++){
                                                        if(s[o]=='r'){
                                                            ++cnt;
                                                            cnt%=1000000007;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout<<cnt<<'\n';
    return 0;
}