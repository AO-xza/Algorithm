#include <iostream>
using namespace std;
const int maxn = 35;
int a[maxn][maxn];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        a[i][i] = a[i][0] = 1;
        for (int j = 1; j < i; ++j) {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
