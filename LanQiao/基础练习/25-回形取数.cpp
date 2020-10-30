#include<iostream>
using namespace std;
const int maxn = 205;
int main()
{
    int m, n;
    cin >> m >> n;
    int a[maxn][maxn];
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < (m + 1) / 2 && i < (n + 1) / 2; ++i) {
        for (int j = i; j < m - i; ++j) {
            cout << a[j][i] << " ";
        }
        for (int j = i + 1; j < n - i; ++j) {
            cout << a[m-i-1][j] << " ";
        }
        if(n - i - 1 > i){
            for (int j = m - i -2; j >= i; --j) {
                cout << a[j][n-i-1] << " ";
            }
        }
        if (m - i - 1 > i){
            for (int j = n - i - 2; j > i; --j){
                cout << a[i][j] << " ";
            }
        }
    }
    return 0;
}