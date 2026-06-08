#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main() {
	int n;      cin>>n;
	string s;   cin>>s;

	vector<char> result;
	int left_count = 0;
    
    rep(i,n){
        if(s[i] == '(') {
			++left_count;
			result.push_back(s[i]);
		}else if(s[i] == ')') {
			if (left_count > 0) {
				while (true) {
					char ch = result.back();
					result.pop_back();
					if (ch == '(') {
						--left_count;
						break;
					}
				}
			}else result.push_back(s[i]);
		}else result.push_back(s[i]);
    }

	for(auto a:result) cout<<a;
	cout << endl;

    
    return 0;

}