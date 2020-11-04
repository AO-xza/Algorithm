#include <stdio.h>
int main(){
    int m, n;
    double result, sum = 0.0;
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; ++i) {
        result= i*i + 1.0/i;
        sum = sum + result;
    }
    printf("sum = %.6f", sum);
    return 0;
}