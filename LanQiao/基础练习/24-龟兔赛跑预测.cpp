#include <iostream>
using namespace std;
int main()
{
    int  l, v1, v2, s, t;
    cin >> v1 >> v2 >> t >> s >> l;
    int l1 = 0;
    int l2 = 0;
    int num = 0;
    while (l1 < l && l2 < l){
        if (l1 - l2 >= t){
            for (int i = 1; i <= s; ++i) {
                l2 += v2;
                num++;
                if (l2 >= l){
                    cout << "T" << endl;
                    cout << num;
                    exit(0);
                }
            }
        } else{
            num++;
            l1 += v1;
            l2 += v2;
        }
    }
    if(l1 > l2){
        cout << "R" << endl;
    } else if (l2 > l1){
        cout << "T" << endl;
    } else{
        cout << "D" << endl;
    }
    cout << num;
    return 0;
}
