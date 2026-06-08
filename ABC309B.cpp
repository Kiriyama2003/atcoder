#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;  cin>>n;
    /*
    vector<string> s(n);
    for(int i=0;i<n;i++) cin>>s[i];

    for(int i=0;i<n;i++){
        //上
        s[0][i+1]=s[0][i];
        //下
        s[n-1][i]=s[n-1][i+1];
        //右
        s[i+1][n-1]=s[i][n-1];
        //左
        s[i][0]=s[i+1][0];
    }
    for(int i=0;i<n;i++) cout<<s[i]<<endl;*/

    vector<vector<int>> grid(n,vector<int>(n));
    vector<vector<int>> check(n,vector<int>(n));
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++){
            char a; cin>>a;
            grid[i][j]=a-'0';
            check[i][j]=grid[i][j];
        }
    }

    //上辺の操作
    for(int i=1;i<n;i++) grid[0][i]=check[0][i-1];
    for(int i=1;i<n;i++) grid[i][n-1]=check[i-1][n-1];
    for(int i=n-2;i>=0;i--) grid[n-1][i]=check[n-1][i+1];
    for(int i=n-2;i>=0;i--) grid[i][0]=check[i+1][0];
    
    //出力のみ
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) cout<<grid[i][j];
        cout<<endl;
    }
    return 0;
}