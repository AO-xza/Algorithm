#include <stdio.h>
#include <math.h>
int main(){
    int n;
    double sum = 0.0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        sum = sqrt(i) + sum;
    }
    printf("sum = %.2f", sum);
    return 0;
}
