#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n,m;    cin>>n>>m;
    vector a(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

    int ans=0;
    for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
            //人iと人jが隣かどうか
			bool flag=0;

            //m行ついて
			for(int k=0;k<m;k++){
                //文字数について
				for(int l=0;l<n-1;l++){
					if((a[k][l]==i&&a[k][l+1]==j) || (a[k][l]==j&&a[k][l+1]==i)) flag=1;
				}
			}
			if(flag==0)ans++;
		}
	}
    cout<<ans<<endl;
    return 0;
}