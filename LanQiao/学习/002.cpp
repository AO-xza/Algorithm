#include <iostream>
using namespace std;
int main(){
    char n;
    cin >> n;
    if(n >= 'A' && n <= 'Z'){
        for (int i = 1; i <= n - 'A' + 1; ++i) {
            for (int j = 1; j <= n - 'A' - i + 1; j++) {
                cout << ' ';
            }
            for (int j = 1; j <= i; ++j) {
                cout << (char)(j + 'A' - 1);
            }
            for (int j = i - 1; j >= 1; --j) {
                cout << (char)(j + 'A' - 1);
            }
            cout << endl;
        }
    } else{
        for (int i = 1; i <= n - '0'; ++i) {
            for (int j = 1; j <= n - '0' - i; ++j) {
                cout << ' ';
            }
            for (int j = 1; j <= i; ++j) {
                cout << (char)(j + '0');
            }
            for (int j = i - 1; j >= 1; --j) {
                cout << (char)(j + '0');
            }
            cout << endl;
        }
    }
    return 0;
}