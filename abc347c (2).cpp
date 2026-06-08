#include<bits/stdc++.h>
using namespace std;
int main(){
	long long N,A,B;  cin>>N>>A>>B;
    vector<long long>D(N);
    for(int i=0;i<N;i++) cin>>D[i];
    set<long long>st;
    for(int i=0;i<N;i++){
        if(D[i]%(A+B)==0){
            st.insert(A+B);
        }else{
            st.insert(D[i]%(A+B));
        }
    }
    
    if((*rbegin(st)-*begin(st)+1)<=A){
    //&& (A+B+1-(*rbegin(st)-*begin(st)+1))<=B){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;
}