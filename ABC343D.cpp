/*#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int countDistinctNumbers(const vector<ll>& vec) {
    unordered_map<ll, ll> counts;
    for (ll num : vec) {
        counts[num]++;
    }
    int distinctCount = 0;
    for (auto& pair : counts) {
        if (pair.second > 0) {
            distinctCount++;
        }
    }
    return distinctCount;
}
int main(void){
    ll n,t; cin>>n>>t;
    vector<pair<ll,ll>>x(t);
    for(int i=0;i<t;i++){
        cin>>x[i].first>>x[i].second;
    }


    vector<ll>now(n,0);
    for(int i=0;i<t;i++){
        now[x[i].first]+=x[i].second;
        cout<<countDistinctNumbers(now)<<endl;
    }
    
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
using ll =long long;

// countDistinctNumbers関数の引数を修正
int countDistinctNumbers(const vector<ll>& vec) {
    unordered_set<ll> distinctNumbers;
    for (int i=0;i<vec.size();i++) {
        distinctNumbers.insert(vec[i]);
    }
    return distinctNumbers.size();
}

int main(void){
    ll n,t; 
    cin>>n>>t;
    vector<pair<ll,ll>>x(t);
    for(int i=0;i<t;i++){
        ll a,b;    cin>>a>>b;
        x[i].first=--a;
        x[i].second=b;
    }

    vector<ll>now(n); // サイズnのnowベクトルを0で初期化
    for(int i=0;i<t;i++){
        now[x[i].first]+=x[i].second;
        //cout<<"after "<<i+1<<" operation: ";
        //for(int j=0;j<n;j++) cout<<now[j]<<" ";
        cout<<countDistinctNumbers(now)<<endl;
    }
    
    return 0;
}