#include<bits/stdc++.h>
using namespace std;
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
	int n;  cin>>n;
    string s;   cin>>s;

    if((n%2) == 0) cout<<"No"<<endl;
    else if(
        s.substr(0,((n-1)/2)) == string(((n-1)/2),'1') 
        and
        s[((n-1)/2)] == '/'
        and 
        s.substr(((n-1)/2)+1,((n-1)/2)) 
        //s.substr((n-1)/2+1)
            == string(((n-1)/2),'2')
    ) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}