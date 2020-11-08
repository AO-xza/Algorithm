#include<stdio.h>
int main(){
    double a, b;
    double c;
    scanf("%lf %lf", &a, &b);
    if (a < b*1.1){
        printf("OK");
    } else if ((a >= b*1.1) && (a < b*1.5)){
        c = (a - b) * 100 / b;
        printf("Exceed %.0lf%%. Ticket 200", c);
    } else{
        c = (a - b) * 100 / b;
        printf("Exceed %.0lf%%. License Revoked", c);
    }
    return 0;
}