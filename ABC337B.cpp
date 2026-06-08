#include<bits/stdc++.h>
using namespace std;
int main(void){
    string s;
    cin>>s;
    /*1-1
    for(int a=0;a<101;a++){
        for(int b=0;b<101;b++){
            for(int c=0;c<101;c++){
                string X=string(a,'A')+string(b,'B')+string(c,'C');
                if(X==s) {
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
    }*/
    /*1-2
    int N=s.size();
    for(int a=0;i<N+1;a++){
        for(int b=0;b<N+1-a;b++){
            int c=N-a-b
            if(S == string(a, 'A') + string(b, 'B') + string(c, 'C')){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }*/
    /*1-3
    int a = count(s.begin(),s.end(), 'A');
    int b = count(s.begin(),s.end(), 'B');
    int c = count(s.begin(),s.end(), 'C');
    if (s == string(a, 'A') + string(b, 'B') + string(c, 'C')) {
        cout << "Yes" << endl;
        return 0;
    }*/
    //2 全てのBの後ろには,BorC　全てのCの後ろには,C
    cout<<"No"<<endl;
    return 0;
}