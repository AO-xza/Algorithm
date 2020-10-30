#include <iostream>
using namespace std;
int num[50000 + 10];
int main()
{
    int count = 0;
    int N;
    cin >> N;
    count += N;
    for (int i = 0; i < N; ++i) {
        cin >> num[i];
    }
    for (int i = 0; i < N; ++i) {
        int min = num[i];
        int max = num[i];
        for (int j = i+1; j < N; ++j) {
            if (min > num[j])
            {
                min = num[j];
            }
            if (max < num[j])
            {
                max = num[j];
            }
            if (max - min == j - i)
            {
                count ++;
            }
        }
    }
    cout << count << endl;
    return 0;
}