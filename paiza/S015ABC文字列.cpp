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
//S015:ABC文字列
//https://paiza.jp/works/challenges/183/page/result

vector<ll> siz;
string s;
string f(int leve,ll start,ll end){
    //string ABC="ABC";
    if(leve == 0) return string("ABC").substr(start,end-start+1);


    //全区間を含む
    if(start == 0 && end == siz[leve] - 1)
        return "A"+f(leve-1,0,siz[leve-1]-1)+"B"+f(leve-1,0,siz[leve-1]-1)+"C";


    string result;
    if(start == 0) result += "A", start++;

    //A + "x1" + B + "x2" + C
    //x1を含む場合 
    if(start <= end && start < siz[leve-1] + 1){ 
        result += f(leve-1,start-1,min(siz[leve-1]-1,end-1));
        start = siz[leve-1] + 1;
    }

    if(start <= end && start == siz[leve-1]+1) result += "B",start++;

    //x2を含む場合
    if(start <= end && start < siz[leve-1] * 2 + 2){
        result += f(leve - 1, start - siz[leve-1] - 2, min(siz[leve-1] - 1, end - siz[leve-1] - 2));
        start = siz[leve-1] * 2 + 2;
    }

    if(start<=end && start == siz[leve]-1) result += "C";
    return result;
}

int main(void){
    ll k,s,t;  cin>>k>>s>>t;

    siz.assign(k,0); siz[0]=3;
    for(int i=1;i<k;i++) siz[i] = 2*siz[i-1]+3;
    cout<<f(k-1,s-1,t-1);
	return 0;
}