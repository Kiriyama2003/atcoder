#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

void f(const string& txt, int level, int rest) {
    if (rest == 0) {
        cout<<txt<<endl;
        return;
    }
    //restは残りの文字
    //levelは, 0~
    
    //level　処理すべき左かっこの数
    //rest 残り追加できる数
    if (level < rest) {
        f(txt + "(", level + 1, rest - 1);
    }

    //こっちはわかっている
    if (level > 0) {
        f(txt + ")", level - 1, rest - 1);
    }
}

int main() {
    int n;  cin>>n;

    if((n % 2) == 0) {
        f("", 0, n);
    }

    return 0;
}
