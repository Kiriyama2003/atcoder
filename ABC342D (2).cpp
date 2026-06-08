#include<bits/stdc++.h>
using namespace std;
bool is_squere(long long N) {
    double r = floor(sqrt(static_cast<double>(N)));  // 切り捨てした平方根
    return (r * r) == N;
}
int main() {
    long long N;    cin>>N;
    vector<long long> A(N);
    long long cnt=0;
    for(int i=0;i<N;i++) cin>>A[i];

    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            long long test=A[i]*A[j];
            if (is_squere(test)) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}