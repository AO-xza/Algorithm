#include<iostream>
using namespace std;
int Callatz(int n){
    int num = 0;
    while (n != 1){
        if(n % 2 == 0){
            n = n / 2;
        } else{
            n = (3 * n + 1) / 2;
        }
        num = num + 1;
    }
    return num;
}
int main(){
    int n;
    cin >> n;
    cout << Callatz(n);
    return 0;
}