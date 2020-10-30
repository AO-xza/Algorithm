#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1, str2;
    int st = -1, end, ans = 0;
    int flag = 0;
    getline(cin, str1);
    getline(cin, str2);
    for (int i = 0; i < str1.size(); ++i) {
        if (str1[i] != str2[i]){
            if (st == -1){
                st = i;
            } else{
                ans += (i-st);
                st = -1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}