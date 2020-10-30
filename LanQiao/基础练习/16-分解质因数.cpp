#include<iostream>
#include <cmath>
using namespace std;
int isprime(int n){
    int flag, i;
    flag = 1;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}
int main()
{
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++) {
        int temp = i;
        cout << i << "=";
        int flag = 0;
        while(temp != 1) {
            for(int j = 2; j <= temp; j++) {
                if(isprime(j) && temp % j == 0) {
                    temp = temp / j;
                    if(flag == 1)
                        cout << "*";
                    cout << j;
                    flag = 1;
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
