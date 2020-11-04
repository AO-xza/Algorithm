#include <stdio.h>
int main(){
    int N;
    double sum = 0.0;
    double num;
    scanf("%d", &N);
    for (int i = 1; i <= 3 * N; i = i + 3) {
        num = 1.000000 / i;
        if (i % 2 == 0){
            sum = sum - num;
        } else{
            sum = num + sum;
        }
    }
    printf("sum = %.3f", sum);
    return 0;
}