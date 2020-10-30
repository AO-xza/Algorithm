#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.length();
    string nums[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    string units[11] = {"", "", "shi", "bai", "qian", "wan", "shi", "bai", "qian", "yi", "shi"};
    for(int i = 0;i < n;i++){
        int num = s[i] - '0';
        if(num == 0){
            if(i+1<n && s[i+1]!='0')
                cout << nums[num] << " ";
        }
        else if((n-i==2 || n-i==6 || n-i==10) && num==1){
            cout << units[n-i] << " ";
        }
        else{
            cout << nums[num] << " " << units[n-i] << " ";
        }
    }
    return 0;
}
