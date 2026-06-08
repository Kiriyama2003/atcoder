#include<bits/stdc++.h>
using namespace std;
int main() {
    /*int n,m;   cin>>n>>m;
    vector<pair<int,int>> A(n);
    for(int i=0;i<n;i++){
        int p,c;    cin>>p>>c;
        A[i]=make_pair(p,c);
    }
    vector<vector<int>> F(n);
    for(int i=0;i<n;i++){
        F[i].resize(A[i].second);
        for(int j=0;j<A[i].second;j++){
            int x;  cin>>x;
            F[i][j]=x;
        }
    }*/

    int N,M;    cin >> N >> M;  int P[N];
    bool func[N][M]={}; //func[i][j]:i番目の商品がj番目の機能を持つか(0-indexed)
    for(int i=0;i<N;i++){
        cin >> P[i];    int c;  cin>>c;
        for(int j=0;j<c;j++){
            int f;  cin>>f; f--; //0-indexedに直す
            func[i][f]=true;
        }
    }
    bool ans=false; //条件をすべて満たす(i,j)のペアが存在するか

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            //P_i>=P_jかどうか
            bool cond1=false;
            //j番目の製品がi番目の製品が持つ機能をすべてもつかどうか
            bool cond2=true;
            //P_i>P_jである、またはj番目の製品がi番目の製品にない機能を1つ以上もつかどうか
            bool cond3=false;

            if(P[i]>=P[j]) cond1=true;

            for(int k=0;k<M;k++){
                if(func[i][k] && !func[j][k]) cond2=false; 
                //i番目の製品がもつ機能をj番目の製品が持っていなかったらダメ
            }

            if(P[i]>P[j]) cond3=true;
            for(int k=0;k<M;k++){
                if(func[j][k] && !func[i][k]) cond3=true; //j番目の製品がi番目の製品にない機能をもっていたらOK
            }

            if(cond1==1 && cond2==1 && cond3==1) ans=true;
        }
    }

    if(ans==true) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}