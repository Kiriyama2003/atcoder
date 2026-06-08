#include<bits/stdc++.h>
using namespace std;
int main() {
    

    /*解法1
    double X;   cin >> X;

    // 小数点以下第3位まで表示
    //std::cout << std::fixed << std::setprecision(3) << X << std::endl;

    // 末尾の余分な0と小数点を除去するための方法
    std::string result = std::to_string(X);

    // 必要のない0や小数点を削除
    result.erase(result.find_last_not_of('0') + 1, std::string::npos);  // 末尾の0を削除
    result.erase(result.find_last_not_of('.') + 1, std::string::npos);  // 末尾の小数点を削除
    std::cout << result << std::endl;*/

    //解法2
    std::string s;   std::cin>>s;
    while(s.back() == '0') s.pop_back();
    if(s.back() == '.') s.pop_back();
    cout<<s<<endl;

    return 0;
}
