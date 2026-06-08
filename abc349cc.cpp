#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    string s,t;    cin>>s>>t;
    /*
    auto isSubarray=[&](string x) ->bool{
        for(int i=0;i<x.size();i++){

        }
    };*/
    ll f1=0,f2=0,f3=0;
    for(char c:s){
        i++;
        if(c-'a'==t[0]-'A'){
            f1=i;
            break;
        }
    }
    i=0;
    for(char c:s){
        i++;
        if(c-'a'==t[1]-'A'){
            f2=i;
            break;
        }
    }
    i=0;
    for(char c:s){
        i++;
        if(c-'a'==t[2]-'A'){
            f3=i;
            break;
        }
    }

    if(f1>0 && f2>0){
        if(f3>0){
            if(f1<f2&&f2<f3){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        if(t[2]=='X'){
            if(f1<f2){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }


    /*
    if(s.find(tolower(t[0]))!=string::npos && s.find(tolower(t[1]))!=string::npos){
        if(t[2]=='X'){
            if(s.find(tolower(t[0])) < s.find(tolower(t[1]))){
                cout<<"Yes"<<endl;
                return 0;
            }
        }else if(s.find(tolower(t[2]))!=string::npos){
            if(s.find(tolower(t[0])) < s.find(tolower(t[1])) && s.find(tolower(t[1])) < s.find(tolower(t[2]))){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }*/
    
    cout<<"No"<<endl;

    return 0;
}