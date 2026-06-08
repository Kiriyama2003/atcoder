#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
int main(void){
    int n; cin>>n;
    vector<vector<int>> a(n,vector<int>(n,-1)); //全て-1を入れとく

    //         右下左上
    int di[4]={1,0,-1,0};
    int dj[4]={0,1,0,-1};

    a[n/2][n/2]=0;  //中央にはTをいれるね,今Tを入れれないね(int型だから)
    int num=1,i=0,j=0; a[j][i]=num; //a[0][0]=1だね
    int d=0;

    while (num < n*n -1) {   
        //ni,njは次の候補 条件に合わないときはダメ
        //だからi,jに直接入れない
		int ni = i + di[d];
        int nj = j + dj[d];
		if ((0<=ni)&&(ni<n) &&(0<=nj)&&(nj<n)
        &&(a[nj][ni] == -1)) {
			i = ni; j = nj;     
            ++num;  a[j][i] = num;
		} else ++d; d %= 4;    //d=0~3
	}

    for (int j=0; j<n; ++j) {
		for (int i=0; i<n; ++i) {
			if (i > 0)          cout << " ";    //各行の一番最初は空白入れないよね
			if (a[j][i] == 0)   cout << 'T';
			else                cout << a[j][i];
		}
		cout << endl;       //改行だね
	}
    return 0;
}