#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    /*string s;cin>>s;
    for(int i=0;i<s.size();i++){
        map<char,int>mp;
        for(int j=0;j<s.size();j++){
            mp[s[j]]++;
        }
        for(int j=0;j<mp.size();j++){
            for(auto v:mp){
                if(v.second!=0&&v.second!=2){
                    cout<<"No"<<endl;
                    return 0;
                }

            }
        }
    }
    cout<<"Yes"<<endl;*/

    /*1vectorのみ
    string s;   cin>>s;
    
    //alpha[0]=aの数　alpha[25]=zの数
    vector<int>alpha(26);
    for(int i=0;i<s.size();i++){
        ++alpha[s[i]-'a'];
    }

    //s=aaaa  s.size=4  =>s[0]~s[3]までしかない　s[4]が必要
    vector<int>num(s.size()+1);
    for(int i=0;i<26;i++){  //alpha[0]~alpha[25]しかない
        ++num[alpha[i]];
    }

    bool result=1;
    for(int i=1;i<num.size();i++){
        if((num[i]!=0)&&(num[i]!=2)){
            result=0;
        }
    }
    cout<<((result==1)?"Yes":"No")<<endl;*/

    //２mapを使った
    string s;cin>>s;
    map<char,int>mp;
    for(auto c:s) mp[c]++;
    vector<int>a(s.size()+1);
    for(auto it:mp){
        a[it.second]++;
    }
    for(int i=1;i<=s.size();i++){
        if((a[i]!=0)&&(a[i]!=2)){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;

    return 0;
}