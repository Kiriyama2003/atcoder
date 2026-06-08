#include<bits/stdc++.h>
using namespace std;
#define INF (1 << 30)   //2の30乗
int main(void){
    int n; cin >> n;
	vector<int> q(n);
	for (int i = 0; i < n; ++i) { cin >> q[i]; }
	vector<int> a(n);
	for (int i = 0; i < n; ++i) { cin >> a[i]; }
	vector<int> b(n);
	for (int i = 0; i < n; ++i) { cin >> b[i]; }

    //作ることができる料理Aの最大値　大き目の値を入れとく
    int a_max =INF; 
    for(int i=0;i<n;++i){
        int t;
        if(a[i]>0){
            t=q[i]/a[i];
            a_max=min(a_max,t);
        }
    } //Aの数を　0-a_maxまで変化させながら,Bの数を数える


    int result = 0; //料理Aの数+料理Bの数
	for (int a_n = 0; a_n <= a_max; ++a_n) {
        //料理Aの数を0からa_maxまで変化させる
		int b_n = INF;
		for (int i = 0; i < n; ++i) {
            //料理Bの材料　B1-Bn
			int r = q[i] - a[i] * a_n; //必ずr=0,r>1
			if (b[i] > 0) {     //材料が0の時は,考えなくていい
				int t = r / b[i];   //r=0ならb_nはゼロ
				b_n = min(b_n, t);
			}
		}

		result = max(result, a_n + b_n);
	}
    cout << result << endl;


    return 0;
}