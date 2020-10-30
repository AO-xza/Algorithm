#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1005;
int main()
{
    int n;

    cin >> n;
    int a[maxn];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a+n);
    int sum = 0;
    int j = 0;
    while (n > 1){
        a[j] = a[j] + a[j + 1];
        sum += a[j];
        a[j+1] = -1;
        sort(a, a+n);
        for (int i = 0; i < n-1; ++i) {
            a[i] = a[i+1];
        }
        n--;
    }
    cout << sum << endl;
    return 0;
}