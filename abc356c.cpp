#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int key_sum,Trial,key_min;  cin>>key_sum>>Trial>>key_min;
    //鍵n本　ｍ回テストを行う　正しい鍵をk本以上刺すと●　鍵は最大15
    //m行 鍵をC(i)本刺す　刺すカギはA　
    //C1 A1 A2 ... A(C1) ●× 
    //Cm A1 A2 ... A(Cm) ●×
    //key_sum<=15  sikou<=100

    //試行の内容 試行の行　全部のkeyの列
    vector<vector<int>> key(Trial,vector<int>(key_sum,0));
    //試行の結果
    vector<string> TrialResult(Trial);

    rep(i,Trial){
        int c;  cin>>c;
        rep(j,c){ int a;  cin>>a; key[i][a-1]=1;}
        cin>>TrialResult[i];
    }

    int res=0;

    //2^key_sum　のうち何個矛盾しないか
    for(int i=0;i<(1<<key_sum);i++){
        //iは,各ビットパータン　(例)0000 ≦i≦ 1111 
       
        vector<int> tf(key_sum);
        for(int j=0;j<key_sum;j++){
            if((i&(1<<j))!=0)   tf[j]=1; //非ゼロ
            else                tf[j]=0; //ゼロ
        }


        bool jud=true;
        //全試行
        for(int j=0;j<Trial;j++){
            int ck=0;
            
            for(int p=0;p<key_sum;p++){
                if(key[j][p]==1 && tf[p]==1) ck++;
            }

            //最低より多いが, 試行結果が×　矛盾している
            if(ck>=key_min && TrialResult[j]=="x")  jud=false;
            //最低より少ないのに, 試行結果がo　矛盾している
            if(ck<key_min && TrialResult[j]=="o")   jud=false;
        }
        if(jud){res++;}
    }

    std::cout<<res<<endl;



    return 0;
}