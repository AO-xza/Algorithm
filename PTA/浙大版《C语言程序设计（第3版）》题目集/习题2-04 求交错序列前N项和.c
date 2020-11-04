#include <stdio.h>
int main(){
    int N;
    double division, sum = 1.0;
    scanf("%d", &N);
    for (int i = 2; i <= N; ++i) {
        if (i % 2 == 0){
            division =-1.0 * i / (2 * i - 1.0);
        } else{
            division = i / (2 * i - 1.0);
        }
        sum = sum + division;
    }
    printf("%.3f", sum);
    return 0;
}
//#include <stdio.h>
//#include <math.h>
//int main(){
//    int N;
//    double division, sum = 1.0;
//    scanf("%d", &N);
//    for (int i = 2; i <= N; ++i) {
//        division =pow(-1, i-1) * i / (2 * i - 1.0);
//        sum = sum + division;
//    }
//    printf("%.3f", sum);
//    return 0;
//}