#include<bits/stdc++.h>
using namespace std;

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

class Person {
public:
    int i_s, j_s, i_t, j_t, dist;
    Person(int is_, int js_, int it_, int jt_): i_s(is_), j_s(js_), i_t(it_), j_t(jt_), 
            dist(abs(is_ - it_)+abs(js_ - jt_)){}
};


class RailwayGame {
private:
    int N, M, K, T; 
    vector<Person> people;
    int currentTurn;
    ll currentMoney;
    vector<string> actions;
public:
    RailwayGame(int N_, int M_, int K_, int T_): N(N_), M(M_), K(K_), T(T_){
        currentMoney = K, currentTurn = 0, actions.resize(T, "-1");
    }

    // 人の追加
    void addPerson(int is_, int js_, int it_, int jt_) {
        Person p(is_, js_, it_, jt_);
        people.push_back(p);
    }


    void runGame() {
        sort(all(people), [](const Person &a, const Person &b){
            return a.dist < b.dist;
        });

       
        for(auto &p : people){
            if(currentTurn >= T) break;

           
            if(p.i_s != p.i_t) continue;

            
            int row = p.i_s; 
            int col1 = min(p.j_s, p.j_t);
            int col2 = max(p.j_s, p.j_t);
            if(col1 == col2) continue; 


            int trackCount = (col2 - col1 - 1); 
            if(trackCount < 0) trackCount = 0;
            ll cost = 10000 + 100LL*trackCount;

            
            int needTurns = trackCount + 2;

           
            if(cost > currentMoney) continue;
            if(currentTurn + needTurns > T) break;

           
            buildStation(row, col1);
            for(int c=col1+1; c<=col2-1; c++){
                if(currentTurn >= T) break;
                buildTrack(row, c);
            }
            if(currentTurn < T) buildStation(row, col2);

            currentMoney -= cost;

            
        }
        //while(currentTurn < T) waitTurn();
    }

    
    void outputActions() {
        for(int t=0; t<T; t++) cout << actions[t] << "\n";
    }

private:
    void buildStation(int i, int j){
        if(currentTurn >= T) return;
        ostringstream oss;
        oss << 0 << " " << i << " " << j;
        actions[currentTurn] = oss.str();
        currentTurn++;
    }

    void buildTrack(int i, int j){
        if(currentTurn >= T) return;
        ostringstream oss;
        oss << 1 << " " << i << " " << j;
        actions[currentTurn] = oss.str();
        currentTurn++;
    }

    void waitTurn(){
        if(currentTurn >= T) return;
        actions[currentTurn] = "-1";
        currentTurn++;
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,M,K,T;    cin>>N>>M>>K>>T;
    RailwayGame game(N, M, K, T);

   
    for(int c=0;c<M;c++){
        int a,i,u,e;    cin>>a>>i>>u>>e;
        game.addPerson(a,i,u,e);
    }

    game.runGame();
    game.outputActions();
    return 0;
}
