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

struct Cell {
    int r, c;
};
bool checkRowConflict(vector<Cell> black, vector<Cell> white){
    auto cmpR = [&](auto &a, auto &b){
        if(a.r != b.r) return a.r < b.r;
        return a.c < b.c;
    };
    sort(all(black), cmpR);
    sort(all(white), cmpR);

    int i = 0,c_min = INT_MAX;

    for(auto &w: white){
        while(i < (int)black.size() && black[i].r < w.r){
            c_min = min(c_min, black[i].c);
            i++;
        }
        if(c_min < w.c) return false;
    }
    return true;
}


bool checkColConflict(vector<Cell> black, vector<Cell> white){
    auto cmpC = [&](auto &a, auto &b){
        if(a.c != b.c) return a.c < b.c;
        return a.r < b.r;
    };
    sort(all(black), cmpC);
    sort(all(white), cmpC);

    int i = 0,r_min = INT_MAX;

    for(auto &w: white){
        while(i < (int)black.size() && black[i].c < w.c){
            r_min = min(r_min, black[i].r);
            i++;
        }
        if(r_min < w.r)return false;
    }
    return true;
}


int main(void){
    int N,M;    cin>>N>>M;

    vector<Cell> blacks, whites;
    blacks.reserve(M);
    whites.reserve(M);

    for(int i=0; i<M; i++){
        int r, c;   char color;
        cin >> r >> c >> color;
        --r,--c;

        if(color == 'B') blacks.push_back({r, c});
        else whites.push_back({r, c});
    }

    if(!checkRowConflict(blacks, whites)){
        cout<<"No\n";
        return 0;
    }
    if(!checkColConflict(blacks, whites)){
        cout<<"No\n";
        return 0;
    }
    cout<<"Yes\n";
    return 0;
}