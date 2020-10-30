#include <iostream>
#include <cstring>
using namespace std;
char s[105];
int main(){
    int len, cnt = 0;
    cin >> s;
    len = strlen(s);
    for (int i = 0; i < len; ++i) {
        if(s[i] == 'A'){
            cnt ++;
        }
    }
    cout << cnt << endl;
}
