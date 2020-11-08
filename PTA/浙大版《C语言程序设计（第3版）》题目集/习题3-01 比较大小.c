#include<stdio.h>
int main(){
    int n;
    int a[3];
    for (int i = 0; i < 3; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2 - i; ++j) {
            if(a[j] > a[j+1] && a[j+1] != '\0'){
                n = a[j];
                a[j] = a[j+1];
                a[j+1] = n;
            }
        }
    }
    printf("%d->%d->%d\n", a[0], a[1], a[2]);
    return 0;
}