#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int w,b;    cin>>w>>b;
    int cnt=0;
    string s="wbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbwwbwbwwbwbwbw";    int n=s.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            string t="";
            for(int k=i;k<j;k++){
                t+=s[k];
                if(count(t.cbegin(),t.cend(),'w')==w && count(t.cbegin(),t.cend(),'b')==b){
                    cnt++;
                }
            }
        }
    }
    cout<<(cnt>0 ? "Yes":"No")<<endl;
    return 0;
}