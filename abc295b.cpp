#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i(n);++i)
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int r,c;    cin>>r>>c;
    vector<string>vec(r);
    vector<string>vecc(r);
    
    for(int i=0;i<r;i++) {
        string s;cin>>s;
        vec[i]=s;
        vecc[i]=s;
    }
    //cout<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(vecc[i][j]!='.' && vecc[i][j]!='#'){
                int num=vecc[i][j]-'0';
                
                for(int k=0;k<r;k++){
                    for(int l=0;l<c;l++){
                        
                        if((abs(i-k)+abs(j-l)) <= num){
                            vec[k][l]='.';
                        }
                    }
                }
            }
        }
    }
    for(auto s:vec){
        cout<<s<<endl;
    }
    return 0;
}