/*#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n;  vector<int>a(n);   cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int>ans;
    

    int check=0;
    for(int i=1;i<(n-1);i++){
        if(abs(a[i-1]-a[i])==1&&abs(a[i+1]-a[i])==1) {
            check=i;
            break;
        }
    }
    if(check==0) check=n;
    if(check==1) {
        for(int i=0;i<n;i++) cout<<a[i];
        break 0;
    }

    for(int i=1;i<check;i++){
        if(a[i-1]<a[i]){
            ans.push_back(a[i-1]);
            for(int j=0;)
        }
    }


    for(int i=0;i<ans.size();i++) cout>>ans[i];
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int>a(n);
	for(int i=0;i<n;i++)cin >> a[i];

	for(int i=1;i<a.size();i++){
		if(a[i-1]+1<a[i])a.insert(a.begin()+i,a[i-1]+1);
		if(a[i-1]-1>a[i])a.insert(a.begin()+i,a[i-1]-1);
	}

	for(auto x:a)cout << x << ' ';
}