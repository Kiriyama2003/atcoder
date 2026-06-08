#include<bits/stdc++.h>
using namespace std;
int main(){
	int N,Q;
    cin>>N>>Q;
    vector<int>T(N+1,0);
    for(int i=0;i<Q;i++){
        int temp;
        cin>>temp;
        T[temp]++;
    }

    int sum=0;
    for (int i=1;i<N+1;i++){
        if(T[i]%2==1) sum++;
    }
    
    cout<<(N-sum)<<endl;
    return 0;
}