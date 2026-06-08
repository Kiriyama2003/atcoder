#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
bool isPalindrome(string stri){
        int low=0, high=stri.length()-1;
        while (low < high){
            //不一致が発生した場合
            if (stri[low] != stri[high]) return false;
            low++;  high--;
        }
        return true;
    }
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n;  cin>>n; //n本の棒
    vector<string>s(n);
    rep(i,n) cin>>s[i];
    
    set<string>st;

    rep(i,n){
        //string str(s[i].size(),s[i][0]);
        //if(s[i].size()==1) s[i]+='0';
        //else if(s[i]== str) s[i]+='0';
        //else if(isPalindrome(s[i])) s[i]+='0';
        if(isPalindrome(s[i])) s[i]+='0';
        st.insert(s[i]);
        reverse(all(s[i]));
        st.insert(s[i]);
    }
    cout<<st.size()/2<<endl;

    return 0;
}