#include <stdio.h>
int main(){
    double ki, money;
    int wait;
    scanf("%lf %d", &ki, &wait);
    if (ki <= 3){
        money = (wait / 5) * 2 + 10;
    } else if(ki > 3 && ki <= 10){
        money = (wait / 5) * 2 + 10 + (ki - 3) * 2;
    } else{
        money = (wait / 5) * 2 + 10 + 14 + (ki - 10) * 3;
    }
    printf("%.0lf", money);
    return 0;
}