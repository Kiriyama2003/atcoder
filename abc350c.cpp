#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
    vector<int>A(n+1,0);
    map<int,int>mp;
    for(int i=1;i<n+1;i++) {
        cin>>A[i];
        mp[A[i]]=i;
    }
    
    int sum=0;
    vector<pair<int,int>>ans;
    for(int i=1;i<n+1;i++){
        if(A[i]!=i){
            int tmp=A[i];
            A[i]=i;
            A[mp[i]]=tmp;

            int ttmp=mp[i];
            mp[i]=i;
            mp[tmp]=ttmp;
            sum++;
            ans.push_back(pair(i,ttmp));
        }
    }
    cout<<sum<<endl;
    for(auto a:ans){
        cout<<a.first<<" "<<a.second<<endl;
    }
    return 0;
}