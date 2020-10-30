#include<iostream>
using namespace std;
int main()
{
    int n, m, j;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    cin >> m;
    for (j = 0; j < n; ++j) {
        if (m == a[j]){
            break;
        }
    }
    if(j == n){
        cout << "-1";
    } else{
        cout << j + 1 << endl;
    }
    return 0;
}
