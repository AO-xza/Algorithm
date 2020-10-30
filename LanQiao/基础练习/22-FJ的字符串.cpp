#include<iostream>
using namespace std;
string FJ(int n){
    if (n == 1)
        return "A";
    else
        return FJ(n-1) + (char)(n + 'A' - 1) + FJ(n - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << FJ(n);
    return 0;
}