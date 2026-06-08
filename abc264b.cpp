#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int r,c;    cin>>r>>c;
    //上からr行目　左からc行目


    vector<string> grid={
    "###############",
    "#.............#",
    "#.###########.#",
    "#.#.........#.#",
    "#.#.#######.#.#",
    "#.#.#.....#.#.#",
    "#.#.#.###.#.#.#",
    "#.#.#.#.#.#.#.#",
    "#.#.#.###.#.#.#",
    "#.#.#.....#.#.#",
    "#.#.#######.#.#",
    "#.#.........#.#",
    "#.###########.#",
    "#.............#",
    "###############"
    };

  if(grid[r-1][c-1]=='#'){cout<<"black"<<endl;}
  else{cout<<"white"<<endl;}



    return 0;
}