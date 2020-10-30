#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[20][20];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        int num = 0;
        for (int j = 0; j < n; ++j) {
            if (j != i)
                num += a[j][i];
        }
        if (num >= n / 2)
            cout << i+1 << " ";
    }
    return 0;
}