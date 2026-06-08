#include<bits/stdc++.h>
using namespace std;
#include<atcoder/all>
using namespace atcoder;
using ll =long long;
#define rep(i,n) for(int i=0;i<(n);++i)
#define REP(i,n) for(int i=1;i<=(n);++i)
#define all(n) n.begin(),n.end()
#define rall(n) n.rbegin(),n.rend()
using P = pair<int,int>;
int di[] = {-1,0,1,0};
int dj[] = {0,-1,0,1};
void chmin(int& a,int b){a=min(a,b);}
void chmax(int& a,int b){a=max(a,b);}
int main(void){
	int N,M;    cin>>N>>M;
    // グラフをループにしたい
    vector<int> vec(N);
    set<pair<int,int>> st;
    rep(i,N) vec[i]=i+1;
    rep(i,M){
        int a,b;    cin>>a>>b;
        st.insert({a,b});
        st.insert({b,a});
    }

    ll ans = 4032000;
    do{
        int cnt=0;
        rep(i,N){
            if(st.find({vec[i],vec[(i+1)%N]}) != st.end()) cnt++;
        }
        ans = min(ans,(ll)((N-cnt)+M-cnt));


        cnt=0;
        if(N==6){
            if((st.find({vec[0],vec[1]}) != st.end())) ++cnt;
            if((st.find({vec[1],vec[2]}) != st.end())) ++cnt;
            if((st.find({vec[2],vec[0]}) != st.end())) ++cnt;

            if((st.find({vec[3],vec[4]}) != st.end())) ++cnt;
            if((st.find({vec[4],vec[5]}) != st.end())) ++cnt;
            if((st.find({vec[5],vec[3]}) != st.end())) ++cnt;

            ans = min(ans,(ll)((N-cnt)+M-cnt));
        }else if(N==7){
            if((st.find({vec[0],vec[1]}) != st.end())) ++cnt;
            if((st.find({vec[1],vec[2]}) != st.end())) ++cnt;
            if((st.find({vec[2],vec[0]}) != st.end())) ++cnt;

            if((st.find({vec[3],vec[4]}) != st.end())) ++cnt;
            if((st.find({vec[4],vec[5]}) != st.end())) ++cnt;
            if((st.find({vec[5],vec[6]}) != st.end())) ++cnt;
            if((st.find({vec[6],vec[3]}) != st.end())) ++cnt;

            ans = min(ans,(ll)((N-cnt)+M-cnt));

        }else if(N==8){
            {
                if((st.find({vec[0],vec[1]}) != st.end())) ++cnt;
                if((st.find({vec[1],vec[2]}) != st.end())) ++cnt;
                if((st.find({vec[2],vec[0]}) != st.end())) ++cnt;

                if((st.find({vec[3],vec[4]}) != st.end())) ++cnt;
                if((st.find({vec[4],vec[5]}) != st.end())) ++cnt;
                if((st.find({vec[5],vec[6]}) != st.end())) ++cnt;
                if((st.find({vec[6],vec[7]}) != st.end())) ++cnt;
                if((st.find({vec[7],vec[3]}) != st.end())) ++cnt;

                ans = min(ans,(ll)((N-cnt)+M-cnt));
            }
            cnt=0;
            {
                if((st.find({vec[0],vec[1]}) != st.end())) ++cnt;
                if((st.find({vec[1],vec[2]}) != st.end())) ++cnt;
                if((st.find({vec[2],vec[3]}) != st.end())) ++cnt;
                if((st.find({vec[3],vec[0]}) != st.end())) ++cnt;

                if((st.find({vec[4],vec[5]}) != st.end())) ++cnt;
                if((st.find({vec[5],vec[6]}) != st.end())) ++cnt;
                if((st.find({vec[6],vec[7]}) != st.end())) ++cnt;
                if((st.find({vec[7],vec[4]}) != st.end())) ++cnt;

                ans = min(ans,(ll)((N-cnt)+M-cnt));
            }
        }

    }while(next_permutation(all(vec)));
    cout<<ans<<endl;
	return 0;
}