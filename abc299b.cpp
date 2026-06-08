#include<bits/stdc++.h>
using namespace std;
int main(void){
    long long n,t;  cin>>n>>t;
    vector<long long>c(n);
    vector<long long>r(n);
    int check=-1;

    for(long long i=0;i<n;i++){
        cin>>c[i];
        if(c[i]==t) check=t;
    }

    if(check==-1) check=c[0];


    for(long long i=0;i<n;i++) cin>>r[i];

    long long winner_index=-1;
    long long winner_num=-1;

    for(int i=0;i<n;i++){
        if(c[i]==check){
            if(winner_num<r[i]){
                winner_index=i;
                winner_num=r[i];
            }
            
        }
    }
    cout<<winner_index+1<<endl;
    return 0;
}