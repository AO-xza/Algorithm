#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int max = -99999;
    int min = 99999;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> m;
        if (m > max){
            max = m;
        }
        if (m < min){
            min = m;
        }
        sum += m;
    }
    cout << max << endl;
    cout << min << endl;
    cout << sum << endl;
    return 0;
}
