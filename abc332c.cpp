/*#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(void){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,max_m;    cin>>n>>max_m;
    string s;       cin>>s;
    
    int ans=0;
    //0枚からn枚まで　n日間ある
    for(int i=0;i<n;i++){
        int max_l=i;
        int now_l=max_l;
        int now_m=max_m;
        bool check=true;
        for(int j=0;j<n;j++){    //0日~(n-1)日まで
            if(s[j]=='1'){
                if(now_m==0 &&now_l==0){
                    check=false;
                    //break;
                }else if(now_m!=0 &&now_l!=0) {
                    --now_m;
                }else if(now_m==0 &&now_l!=0){
                    --now_l;
                }else if(now_m!=0 && now_l==0){
                    --now_m;
                }
            }
            if(s[j]=='2'){
                if(now_l==0){
                    check=false;
                    //break;
                }
                --now_l;
            }
            if(s[j]=='0'){
                now_l=max_l;
                now_m=max_m;
            }
        }
        if(check==true) {
            ans=max_l;
            break;
        }
    }
    std::cout<<ans<<endl;
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
using ll =long long;
int main(void){
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int n,max_m;    cin>>n>>max_m;
    string s;       cin>>s;
    
    
    //0枚からn枚まで　n日間ある
    for(int i=0;i<=n+1;i++){
        bool check=true;    int max_l=i;
        int now_l=max_l;    int now_m=max_m;
        for(int j=0;j<n;j++){    //0日~(n-1)日まで
            if(s[j]=='1'){
                if(now_m>0 && now_l>0) {
                    now_m--;
                }else if(now_m==0 && now_l>0){
                    now_l--;
                }else if(now_m>0 && now_l==0){
                    now_m--;
                }else if(now_m==0 &&now_l==0){
                    check=false;
                    break;
                }
            }else if(s[j]=='2'){
                if(now_l>0){
                    now_l--;
                }else {
                    check=false;
                    break;
                }
            }else if(s[j]=='0'){
                now_l=max_l;
                now_m=max_m;
            }
        }
        
        if(check==true) {
            cout<<max_l<<endl;
            return 0;
        }
    }
}
