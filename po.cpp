#include <vector>
#include <string>
#include <iostream>
#include <vector>
#include <tuple>
#include <map>
#include <set>
using namespace std;

vector<long> create_solution(long step, long n, long m, long q, vector<long> query1, vector<long> query2, vector<long> query3) {
  // TODO: Implement this function
  map<pair<int,int>,int>mp;
  vector<long>ans;
  set<long>st;
  vector<int>num(n);  //地方ごとの総発見ポケモン数
  for(int i=0;i<q;i++){
    if(query3[i]!=-1){
      if(mp.count({query1[i],query2[i]})){ //存在するとき「
        mp[{query1[i],query2[i]}] +=query3[i];
      }else{
        mp[{query1[i],query2[i]}] =query3[i];
      }

      num[query1[i]] +=query3[i];        //地方ごとの総発見ポケモン数
      st.insert(query1[i]);
    }else{
      bool tmp_ans=false;
      for(int j=0;j<st.size();j++){
        if(mp.count({j,query1[i]})){
          if(mp[{j,query1[i]}] /num[j] >= 0.01*query2[i]){
          tmp_ans=true;
        }}
      }
      ans.push_back(tmp_ans);
    }
  }
  return ans;
}

tuple<long, long, long, long, vector<long>, vector<long>, vector<long>> read_inputs() {
  long step;
  cin >> step;
  long n;
  cin >> n;
  long m;
  cin >> m;
  long q;
  cin >> q;
  int n_query1;
  cin >> n_query1;
  vector<long> query1(n_query1);
  for (int i = 0; i < n_query1; i++) {
    cin >> query1[i];
  }
  int n_query2;
  cin >> n_query2;
  vector<long> query2(n_query2);
  for (int i = 0; i < n_query2; i++) {
    cin >> query2[i];
  }
  int n_query3;
  cin >> n_query3;
  vector<long> query3(n_query3);
  for (int i = 0; i < n_query3; i++) {
    cin >> query3[i];
  }
  return forward_as_tuple(step, n, m, q, query1, query2, query3);
}

void print_result(vector<long> xs) {
  cout << xs.size() << endl;
  for (auto x : xs) {
    cout << x << endl;
  }
}

int main() {
  auto [step, n, m, q, query1, query2, query3] = read_inputs();
  auto result = create_solution(step, n, m, q, query1, query2, query3);
  print_result(result);
}