#include<stdio.h>
int celsius(int F){
    int C;
    C = 5*(F - 32)/9;
    return C;
}
int main(){
    printf("fahr = %d, celsius = %d", 150,celsius(150));

    return 0;
}