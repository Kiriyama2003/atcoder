#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
int main(void){
	int n,k; cin>>n>>k;
	string s;  cin>>s;

    int cnt=0;
    bool check=0;
    vector<int> vec;
    rep(i,n){
        if(s[i]=='1' and check==false){
            check=true;
            cnt++;
            vec.push_back(i);
        }else if(s[i]=='1' and check==true){

        }else if(s[i]=='0' and check==true){
            vec.push_back(i);
            check=false;
        }
    }
    if((int)vec.size() %2 != 0) vec.push_back((int)s.size());

    //for(auto ff:vec) cout<<ff<<" ";

    string tikan = s.substr(vec[2*(k-1)],vec[2*(k-1)+1] - vec[2*(k-1)]);
    s.erase(vec[2*(k-1)],vec[2*(k-1)+1] - vec[2*(k-1)]);

    rep(i,(int)s.size()){
        if(i==vec[2*(k-1)-1]) cout<<tikan;
        cout<<s[i];
    }



	return 0;
}