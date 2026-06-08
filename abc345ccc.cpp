#include<bits/stdc++.h>
using namespace std;
using ll =long long;

int c2(int n){
    return n*(n-1)/2;
}

int main(void){
    string s;   cin>>s;
    int n=s.size();
    
    vector<int>a(26,0);
    for(int i=0;i<n;i++) a[s[i]-'a']++;

    int ans=c2(n);
    for(int i=0;i<26;i++){
        ans -=c2(a[i]);
        //if(c2)
    }

    cout<<ans<<endl;
    return 0;
}