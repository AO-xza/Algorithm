#include <iostream>
using namespace std;
int main()
{
    string a[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                    "ten","eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                    "seventeen", "eighteen", "nineteen"};
    string b[5] = {"twenty", "thirty", "forty", "fifty", "sixty"};
    int h, m;
    cin >> h >> m;
    if (h <= 19){
        cout << a[h] << " ";
    } else{
        cout << b[0] << " " ;
        if (h % 10 != 0){
            cout << a[h % 10] << " ";
        }
    }
    if (m <= 19 && m != 0){
        cout << a[m];
    } else{
        if (m == 0){
            cout << "o'clock";
        } else{
            cout << b[m / 10 - 2] << " ";
            if (m % 10 != 0){
                cout << a[m % 10];
            }
        }
    }
    return 0;
}