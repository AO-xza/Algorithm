//将数值当字符串来处理，更具'1'-'0'=1的道理来求和
#include<iostream>
#include <string>
using namespace std;
int main(){
    string str;
    string str2[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int sum = 0;
    cin >> str;
    for (int i = 0; i < str.length(); ++i) {
        sum += str[i] - '0';
    }
    string num = to_string(sum);//数值转为字符串（to_string()函数完成数字转字符）
    for (int i = 0; i < num.length(); ++i) {
        if (i != 0) {
            cout << " ";
        }
        cout << str2[num[i] - '0'];
    }
    return 0;
}