#include<iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int i = 0;
    char b[100];
    if (a == 0)
        cout << 0 << endl;
    else
    {
        while(a != 0){
            if(a % 16 < 10)
                b[i++] = a % 16 + '0';
            else
                b[i++] = a % 16 + 'A' - 10;
            a = a / 16;
        }
    }
    for (int k = i-1; k >= 0; --k) {
        cout << b[k];
    }
    return 0;
}