#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);

    vector<vector<char>>A(9,vector<char>(9));
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin>>A[i][j];
        }
    }

    bool check=0;
    for(int i=0;i<9;i++){  //行
        int ans1=0;
        int ans2=0;
        for(int j=0;j=9;j++){
            ans1+=A[i][j];
            ans2+=A[j][i];
        }
        if(ans1!=45 || ans2!=45) {
            cout<<"No"<<endl;
            return 0;
        }
    }

    
    for(int i=0;i<10;i+=3){
        for(int j=0;j<10;j+=3){
            int ans=0;
            for(int k=0;k<3;k++){
                for(int l=0;l<3;l++){
                    ans+=A[i+k][j+l];
                }
            }
            if(ans!=45) {
                cout<<"No"<<endl;
                return 0;
            }

        }
    }
    cout<<"Yes"<<endl;
    return 0;
}