#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define all(n) n.begin(),n.end()
int main() {
    int n,k;    cin>>n>>k;
    vector<int> a(n);
    vector<int> b(k);

    rep(i,n) cin>>a[i];
    rep(i,k) cin>>b[i];

    /*解法1
        int max_num=-1;
        vector<int> ans;

        for(int i=0;i<n;i++){
            if(max_num<a[i]){
                max_num=a[i];
                ans.clear();
                ans.push_back(i+1);
            }else if(max_num==a[i]) ans.push_back(i+1);
        }

        /*解法1-1
        for(int i=0;i<k;i++){
            for(int j=0;j<ans.size();j++){
                if(b[i]==ans[j]){
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
        cout<<"No"<<endl;

        //解法1-2
        set<int> ans_set(all(ans));
        rep(i,k){
            if(ans_set.count(b[i])){
                cout<<"Yes"<<endl; return 0;
            }
        }
        cout<<"No"<<endl;*/

    //解法2
    int max_num=-1;
    for(int i=0;i<n;i++) max_num=max(max_num,a[i]);
    for(int i=0;i<k;i++){
        if(a[b[i]-1] == max_num){ cout<<"Yes"<<endl; return 0;}
    }
    cout<<"No"<<endl;


    return 0;
}
