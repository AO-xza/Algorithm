#include <stdio.h>
#include <math.h>
int main(){
    int n, result;
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i) {
        result = pow(3,i);
        printf("pow(3,%d) = %d\n",i, result);
    }
    return 0;
}