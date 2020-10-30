#include<iostream>
#include<string>
using namespace std;
int whatday(int y, int m, int d){
    int ans = 0;
    for (int i = 1; i < y; ++i) {
        if((i % 100 != 0 && i % 4 == 0) || i % 400 == 0){
            ans += 366 % 7;
            ans %= 7;
        } else{
            ans += 365 % 7;
            ans %= 7;
        }
    }
    for (int i = 1; i < m; ++i) {
        if(i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12){
            ans += 31 % 7;
            ans %= 7;
        } else if(i == 4 || i == 6 || i == 9 || i == 11){
            ans += 30 % 7;
            ans %= 7;
        } else if((y % 100 != 0 && y % 4 == 0) || y % 400 == 0){
            ans += 29 % 7;
            ans %= 7;
        } else{
            ans += 28 % 7;
            ans %= 7;
        }
    }
    ans += (d - 1) % 7;
    ans %= 7;
    return ans;
}
string weekday[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int main(){
    int y, m, d;
    cin >> y >> m >> d;
    cout << weekday[whatday(y, m, d)] << endl;
    return 0;
}
