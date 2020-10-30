#include <iostream>
using namespace std;
int main()
{
    long long int n, result;
    cin >> n;
    if (n > 2) {
        if (n % 2 != 0){
            result = n * (n-1) * (n-2);
        } else if (n % 3 == 0){
            result = (n-1) * (n-2) * (n-3);
        } else{
            result = (n) * (n-1) * (n-3);
        }
    } else{
        result = n;
    }
    cout << result << endl;
    return 0;
}