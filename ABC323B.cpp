#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;  cin>>n;
    vector<string> s(n);
    for(int i=0;i<n;i++) cin>>s[i];

    vector<int> cnt(n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(s[i][j]=='o') cnt[i]++;
        }
    }

    int flag=0;
    for(int i=99;i>-1;i--){
        for(int j=0;j<n;j++){
            if(flag==0){
                if(cnt[j]==i){
                    cout<<j+1;
                    flag=1;
                }
            }else{
                if(cnt[j]==i){
                cout<<" "<<j+1;
                }
            }  
        }
    }
    return 0;
}
