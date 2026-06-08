#include<bits/stdc++.h>
using namespace std;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    /*
    ll T,L,X,Y,q;  cin>>T>>L>>X>>Y>>q;
    
    while(q--){
        ll E;   cin>>E;
        E %= T;



        long double tmpz = (long double)(E%(T/2))/(long double)T*L*2;
        

        long double tmpy;
        if(0<=E and E<=T/2){
            tmpy=   -    E/(long double)(T) *L;
        }else tmpy= E/(long double)(T)*L;

        cout<<tmpy<<' '<<tmpz<<endl;


        
    }*/

    int Q;
    long double T, L, X, Y, E,PI = 3.14159265358979;

    auto query=[&](long double I){
        long double cx = 0;
        long double cy = -(L / 2.0) * sin(I / T * 2.0 * PI);
        long double cz = (L / 2.0) - (L / 2.0) * cos(I / T * 2.0 * PI);



        long double d1 = sqrt((cx - X) * (cx - X) + (cy - Y) * (cy - Y));
        long double d2 = cz;    
        long double kaku = atan2(d2, d1);   //ラジアン
        return kaku * 180.0L / PI;
    };
    cin >> T;
	cin >> L >> X >> Y;
	cin >> Q;
	for (int i = 1; i <= Q; i++) {
		cin >> E;
		printf("%.12Lf\n", query(E));
	}
	return 0;
    return 0;  
}