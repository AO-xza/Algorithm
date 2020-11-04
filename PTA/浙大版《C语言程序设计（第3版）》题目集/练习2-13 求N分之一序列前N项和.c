#include <stdio.h>
int main(){
    int N;
    double sum = 0.0;
    double num;
    scanf("%d", &N);
    for (int i = 1; i <= N; ++i) {
        num = 1.000000 / i;
        sum = num + sum;
    }
    printf("sum = %.6f", sum);
    return 0;
}