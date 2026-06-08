#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(void){
    string s;   cin>>s;
    int n=s.size();
    vector<int>a(26);
    ll ans=0;

    for(int i=0;i<n;i++){
        ans += i - a[s[i]-'a'];
        a[s[i]-'a']++;
    }


    //被りの文字が1つでもあるなら　ans++だけする
    for(int i=0;i<26;i++){
        if(a[i]>1){ //ans[i]=2以上なら
            ans++;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}