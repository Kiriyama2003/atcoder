#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n; cin>>n;
    int Takahashi_Score=0;
    int Aoki_Score=0;

    /*
    for(int i=0;i<n;++i){
        int x,y;
        cin>>x>>y;
        Takahashi_Score+=x;
        Aoki_Score+=y;
    }*/
    vector<vector<int>> a(2,vector<int>(n));
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        a[0][i]=x;
        a[1][i]=y;
    }
    for(int i=0;i<n;i++){
        Takahashi_Score+=a[0][i];
        Aoki_Score+=a[1][i];
    }

    if(Takahashi_Score>Aoki_Score) cout<<"Takahashi"<<endl;
    else if(Takahashi_Score<Aoki_Score) cout<<"Aoki"<<endl;
    else cout<<"Draw"<<endl;

    return 0;
}