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
    string s;   cin>>s;
    int n=(int)s.size();


    if((n%2)==1){
        cout<<"No"<<endl;
        return 0;
    }


    vector<int> cnt(26,0);
    bool check=true;
    int r=0;


    for(int i=0;i<n/2;i++){
        if(s[r] != s[r+1]) check=false;
        else{
            int num = s[r]-'a';
            if(cnt[num] != 0) check=false;
            cnt[num]++;
        }

        r+=2;
    }

    
    cout<<(check?"Yes":"No")<<endl;
    return 0;
}