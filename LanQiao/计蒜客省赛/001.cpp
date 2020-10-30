#include<cstdio>
int main(){
    int a = 0, sum = 0;
    for (int i = 1; i <= 100; ++i) {
        a = a + i;
        sum = a + sum;
    }
    printf("%d", sum);
    return 0;
}