#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int flag = 2;
    if (a.length() != b.length()) {
        cout << 1 << endl;
    } else{
        for (int i = 0; i < a.length(); ++i) {
            if (a[i] != b[i] && tolower(a[i]) != tolower(b[i])) {
                flag = 4;
                break;
            } else if (a[i] != b[i] && tolower(a[i]) == tolower(b[i])){
                flag = 3;
            }
        }
        cout << flag;
    }
    return 0;
}
