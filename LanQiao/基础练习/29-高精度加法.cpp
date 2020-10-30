#include <iostream>
using namespace std;
const int maxn = 105;
int main()
{
     string a;
     string b;
     cin >> a >> b;
     int lena = a.length();
     int lenb = b.length();
     int A[maxn] = {0};
     int B[maxn] = {0};
     int j = 0;
     for (int i = lena - 1; i >= 0; --i) {
         A[j++] = a[i] - '0';
     }
     j = 0;
     for (int i = lenb - 1; i >= 0; --i) {
        B[j++] = b[i] - '0';
     }
     int C[maxn] = {0};
     int temp = 0;
     for (int i = 0; i < 100; ++i) {
         C[i] = A[i] + B[i] + temp;
         temp = C[i] / 10;
         C[i] = C[i] % 10;
     }
    int max = 0;
    if (lena < lenb)
        max = lenb;
    else
        max = lena;
     max = max -1;
     if (C[max + 1] != 0)
         max = max + 1;
     for (int i = max; i >= 0; --i) {
        cout << C[i];
     }
     return 0;
}
