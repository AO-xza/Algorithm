#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string m;
    cin >> m;
    int j = n - 1;
    int cnt = 0;
    int flag = 0;
    for (int i = 0; i < j; ++i) {
        for (int k = j; k >= i; --k) {
            if (k == i){
                if (n % 2 == 0 || flag == 1){
                    cout << "Impossible";
                    return 0;
                }
                flag = 1;
                cnt += n / 2 - i;
            } else if(m[k] == m[i]){
                for (int l = k; l < j; ++l) {
                    swap(m[l], m[l+1]);
                    cnt++;
                }
                j--;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}