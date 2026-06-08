#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()

void generateSequences(int index,int sum,vector<int>& current,const vector<int>& R,int K) {
    int N=R.size();
    if(index==N){
        if(sum%K == 0) {
            for(int i=0;i<N;i++) cout<<current[i]<< " ";
            cout<<endl;
        }
        return;
    }
    for (int i=1;i<=R[index];i++){
        current[index] = i;
        generateSequences(index + 1, sum + i, current, R, K);
    }
}

int main() {
    int N,K;    cin>>N>>K;
    vector<int> R(N);
    rep(i,N) cin >> R[i];
    vector<int> current(N, 0);

    generateSequences(0, 0, current, R, K);
    return 0;
}
