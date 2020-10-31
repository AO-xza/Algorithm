#include <stdio.h>
int main(){
    float w, cost;
    scanf("%f", &w);
    if (w < 0){
        printf("Invalid Value!");
    } else if (w >= 0 && w <= 50){
        cost = w * 0.53;
        printf("cost = %.2f", cost);
    } else{
        cost = (w - 50) * (0.53 + 0.05) + 50 * 0.53;
        printf("cost = %.2f", cost);
    }
    return 0;
}