#include <stdio.h>
double fact(int n);
int main(){
    int n, m;
    double result = 1;
    scanf("%d%d", &m, &n);
    result = fact(n) / (fact(m) * fact(n-m));
    printf("result = %.0f", result);
    return 0;
}
double fact(int n){
    double result = 1;
    for (int i = 1; i <= n; ++i) {
        result = result * i;
    }
    return result;
}