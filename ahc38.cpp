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
int main() {
    vector<int> DY={0, 1, 0, -1},DX={1, 0, -1, 0};
    vector<char> DIR={'R', 'D', 'L', 'U'};

    // Read input
    int N,M,V;  cin>>N>>M>>V;
    vector<string> s(N),t(N);
    rep(i,N) cin>>s[i];
    rep(i,N) cin>>t[i];

    // Design the tree
    vector<pair<int,int>> tree={{0, 1}};
    cout<<tree.size()+1<<endl;
    for(auto [p, L] : tree) cout<<p<<" "<<L<<endl;

    //初期位置を出力
    int rx=0,ry=0;  cout<<rx<<" "<<ry<<endl;

    int dir1 = 0; // Direction of edge (0, 1)
    bool holding = false; // Whether holding a takoyaki

    rep(turn,100000){
        string S;
        // Random move
        if( rx > (N-1) ) rx++;
        

        // Random rotate
        int rot ;
        if (rot == 0) S.push_back('.');
        else if (rot == 1) {
            S.push_back('L');
            dir1 = (dir1 + 3) % 4;
        } else {
            S.push_back('R');
            dir1 = (dir1 + 1) % 4;
        }

        // Grab or release takoyaki
        int x = rx + DX[dir1];
        int y = ry + DY[dir1];
        bool change = false;
        if (0 <= x && x < N && 0 <= y && y < M) {
            if (s[x][y] == 1 && t[x][y] == 0 && !holding) {
                change = true;
                s[x][y] = 0;
                holding = true;
            } else if (s[x][y] == 0 && t[x][y] == 1 && holding) {
                change = true;
                s[x][y] = 1;
                holding = false;
            }
        }
        S.push_back('.'); // Vertex 0 (root) is not a leaf

        if(change) S.push_back('P');
        else S.push_back('.');

        // Output the command
        cout<<S<<endl;
    }
    return 0;
}