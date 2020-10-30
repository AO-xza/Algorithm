#include <iostream>
using namespace std;
int main()
{
    int a, b, c, all;
    cin >> a >> b >> c;
    for (int i = 1; ; ++i) {
        if (i%a==0 && i%b==0 && i%c==0){
            all = i;
            break;
        }
    }
    cout << all << endl;
    return 0;
}