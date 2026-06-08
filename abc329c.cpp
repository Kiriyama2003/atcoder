#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;  string s;   cin>>n>>s;
    //文字列sで　mx[0]=aが最大連続する数
    //例 s=dfsakajaaaa  mx[0]=4
    vector<int>mx(26);

    int l=0;
    //l-現在位置　r-lから来る相対位置
    while(l<n){     //sの末尾　[n-1]
        int r=l+1;

        
        while(r<n && s[l]==s[r]) ++r;
        
        int c=s[l]-'a'; //s[現在位置]のアルファベット
        mx[c]=max(mx[c],r-l);
        
        l=r;
    }

    int ans=0;
    for(int i=0;i<26;i++) ans+=mx[i];
    cout<<ans<<endl;
    return 0;
}