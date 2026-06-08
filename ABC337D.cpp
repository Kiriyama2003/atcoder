#include<bits/stdc++.h>
using namespace std;
const int INF=1001001001;
int solve(string s,int k){
    int n=s.size();
    int res INF;
    {
        int xs=0,es=0;
        for(int i=0;i<k;i++) xs += s[i]=='x';
        for(int i=0;i<k;i++) es += s[i]=='.';
        for(int i=k;i<n;i++){
            
        }
        
    }
    return res;

}


int main() {
    int h,w,k;
    cin>>h>>w>>k;
    vector<string> s(h);
    for(i=0;i<h;i++) cin>>s[i];


    int ans=INF;
    for(int i=0;i<h;i++) ans=min(ans,solve(s[i],k))

    if(ans == INF) ans=-1
    cout<<ans<<endl;

    return 0;
}