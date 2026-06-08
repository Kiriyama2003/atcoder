#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
// 縦横の移動用
int di[4] = {-1, 0, 1, 0};
int dj[4] = {0, 1, 0, -1};

int main(){
    int m,n;    cin>>m>>n;
    vector mat(n,vector<int>(m));
    rep(i,n) rep(j,m) cin>>mat[i][j];

    int answer = 0;
    rep(i,n) rep(j,m){
            if(mat[i][j] == 0)  continue;

            answer++;
            mat[i][j] = 0;

            queue<pair<int,int>> q;
            q.push({i, j});
            
            while(!q.empty()){
                pair<int,int> p = q.front();
                q.pop();
                
                rep(k,4){
                    int ni = p.first + di[k];
                    int nj = p.second + dj[k];
                    if(ni < 0 || n <= ni || nj < 0 || m <= nj)  continue;
                    if(mat[ni][nj] == 0)    continue;
                    mat[ni][nj] = 0;
                    q.push({ni, nj});
                }
            }
    }
    std::cout<<answer<<endl;
    return 0;
}