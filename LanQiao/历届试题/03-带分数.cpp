#include <iostream>
#include <string.h>
using namespace std;
int a[10] = {0};
int Division(int m)
{
    int t;
    while (m){
        t = m % 10;
        if (t == 0){
            return 0;
        }
        a[t]++;
        m = m/10;
    }
    return 1;
}
int main()
{
    int i, k, j;
    int number, ans = 0, flag;
    cin >> number;
    for (int i = 1; i < number; ++i) {
        for (int j = 1; j <= 4938; ++j) {
            memset(a, 0, sizeof(a));
            k = (number - i)*j;
            if (Division(i) && Division(j) && Division(k)){
                flag = 1;
                for (int x = 1; x < 10; ++x) {
                    if (a[x] != 1){
                        flag = 0;
                        break;
                    }
                }
                if (flag == 1)
                    ans++;
            }
        }
    }
    cout << ans;
    return 0;
}