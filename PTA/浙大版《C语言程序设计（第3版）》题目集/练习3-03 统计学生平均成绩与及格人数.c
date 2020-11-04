#include <stdio.h>
int main(){
    int n, m, count = 0, sum = 0;
    double average;
    scanf("%d", &n);
    if (n == 0){
        printf("average = 0.0\n");
        printf("count = 0");
    } else{
        for (int i = 1; i <= n; ++i) {
            scanf("%d", &m);
            if (m >= 60){
                count = count + 1;
            }
            sum = m + sum;
        }
        average = 1.0 * sum / n ;
        printf("average = %.1f\n", average);
        printf("count = %d", count);
    }
    return 0;
}