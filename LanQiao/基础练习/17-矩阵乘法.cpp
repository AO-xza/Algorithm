#include <iostream>
using namespace std;
const int maxn = 35;
long long int b[maxn][maxn];
long long int a[maxn][maxn];
long long int t[maxn][maxn];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
            t[i][j] = a[i][j];
        }
    }
    if (m == 0){
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i != j)
                    cout << 0 << " ";
                else
                    cout << 1 << " ";
            }
            cout << endl;
        }
        return 0;
    }
    while (--m){
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < n; ++k) {
                    b[i][j] += t[i][k] * a[k][j];
                }
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                t[i][j] = b[i][j];
                b[i][j] = 0;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
