#include <iostream>
using namespace std;
int main()
{
    int n, a = 1, b = 1, c = 0;
    cin >> n;
    if (n <= 2){
        cout << 1;
    } else{
        for (int i = 3; i <= n; ++i) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c % 10007 << endl;
    }
    return 0;
}