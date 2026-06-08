#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;   cin>>s;

    int n=s.size();
    int cnt=0;
    map<string,bool>d;
    for (int i=0;i<n;i++) {
		for (int j=i+1;j<=n;j++) {
			string t="";
			for (int k=i;k<j;k++) {
                t+=s[k];
                d[t]=1;
                //tが部分文字列
            }
		}
	}

    cout<<d.size()<<endl;
    return 0;
}