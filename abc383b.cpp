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
int main(void){
	int h,w,d; cin>>h>>w>>d;
    vector<string> s(h);
    rep(i,h) cin>>s[i];


    vector<vector<pair<int,int>>> tmp;

    
	rep(i,h) rep(j,w){
        if(s[i][j] == '.'){
            vector<pair<int,int>> tmpp;
            
            for(int di = -d; di <= d; di++) {
                for(int dj = -d; dj <= d; dj++) {
                    int ni = i + di, nj = j + dj;

                    if(ni < 0 || ni >= h || nj < 0 || nj >= w) continue;

                    if(abs(di) + abs(dj) > d) continue;

                    if(s[ni][nj] == '.') tmpp.push_back({ni,nj});
                }
            }

            tmp.push_back(tmpp);
        }
    }

    vector<int> ans;
    int n = tmp.size();
    for(int i=0;i<=(n-2);i++){
        for(int j=i+1;j<=(n-1);j++){

            set<pair<int,int>> st;
            rep(k,(int)tmp[i].size()) st.insert(tmp[i][k]);
            rep(k,(int)tmp[j].size()) st.insert(tmp[j][k]);
            
            ans.push_back((int)st.size());
        }
    }
    sort(rall(ans));
    cout<<ans[0]<<endl;
	return 0;
}