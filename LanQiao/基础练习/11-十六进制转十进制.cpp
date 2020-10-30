#include<iostream>
using namespace std;
int main()
{
    string n;
    cin >> n;
    long long sum = 0;
    for (int i = 0; i < n.length(); i++) {
        if (n[i] >= 'A' && n[i] <= 'F')
            sum = sum * 16 + n[i] - 'A' + 10;
        else
            sum = sum * 16 + n[i] - '0';
    }
    cout << sum;
    return 0;
}