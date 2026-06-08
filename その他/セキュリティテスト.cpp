#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    string s="afsajklweruio";
    for (int i=0;i<s.size();i++) {
		for (int j=i+1;j<=s.size();j++) {
			string t="";
			for (int k=i;k<j;k++) {
                t+=s[k];
            }
            cout<<t<<endl;
			cout<<s.substr(i,j-i)<<endl;
            //tが部分文字列
		}
	}
    return 0;
}