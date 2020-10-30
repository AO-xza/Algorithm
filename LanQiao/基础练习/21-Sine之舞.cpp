#include <iostream>
using namespace std;
void Sn1(int n){
    for (int i = 1; i <= n; ++i) {
        cout << "sin(" << i;
        if (i != n){
            if(i % 2 == 1){
                cout << "-";
            } else{
                cout << "+";
            }
        } else{
            for (int j = 1; j <= n; ++j) {
                cout << ")";
            }
        }
    }
}
void Sn2(int n){
    for (int i = 1; i < n; ++i) {
        cout << "(";
    }
    for (int i = 1; i <= n; ++i) {
        Sn1(i);
        cout << "+" << n - i + 1;
        if (i != n){
            cout << ")";
        }
    }
}
int main()
{
    int n;
    cin >> n;
    Sn2(n);
    return 0;
}
