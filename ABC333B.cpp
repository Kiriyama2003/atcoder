#include<bits/stdc++.h>
using namespace std;

    //bool near (char x, char y) {
    //    /*xとyを昇順にソート*/
    //    if(x > y) swap(x, y);
     //   /*文字コードの差が1or4なら1を返す*/
     //   return y - x == 1 or y - x == 4;
	//}

int main(void){
    /*試行錯誤のゴミ
    char s1,s2,t1,t2;
    cin>>s1>>s2; cin>>t1>>t2;
    int s11,s22,t11,t22;
    
    if(s1=='A') s11='0';
    if(s1=='B') s11='1';
    if(s1=='C') s11='2';
    if(s1=='D') s11='3';
    if(s1=='E') s11='4';

    if(s2=='A') s22='0';
    if(s2=='B') s22='1';
    if(s2=='C') s22='2';
    if(s2=='D') s22='3';
    if(s2=='E') s22='4';

    if(t1=='A') t11='0';
    if(t1=='B') t11='1';
    if(t1=='C') t11='2';
    if(t1=='D') t11='3';
    if(t1=='E') t11='4';

    if(t2=='A') t22='0';
    if(t2=='B') t22='1';
    if(t2=='C') t22='2';
    if(t2=='D') t22='3';
    if(t2=='E') t22='4';

    
    int s_diff=abs(s11-s22);
    if(s_diff==4) s_diff=1;

    int t_diff=abs(t11-t22);
    if(t_diff==4) t_diff=1;

    if(t_diff%2 == s_diff%2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;*/


    //char a,b,c,d; cin>>a>>b>>c>>d;
	//if(near(a, b) == near(c, d)) cout << "Yes\n";
	//else cout << "No\n";


    string P = "ABCDEAEDCBA";
    string S, T; cin >> S >> T;

    // 文字列SがPに含まれているか、文字列TがPに含まれているかを判定し、結果に応じて出力
    cout << ((P.find(S) != string::npos) == (P.find(T) != string::npos) ? "Yes" : "No");

    return 0;
}