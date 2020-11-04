#include <stdio.h>
int main(){
    int n;
    int result2 = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int result1 = 1;
        for (int j = 1; j <= i; ++j) {
            result1 = j * result1;
        }
        result2 = result1 + result2;
    }
    printf("%d", result2);
    return 0;
}
