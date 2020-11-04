#include <stdio.h>
int main(){
    int letter = 0, blank = 0, digit = 0, other = 0;
    char ch;
    for (int i = 0; i < 10; ++i) {
        scanf("%c", &ch);
        if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
            letter = letter + 1;
        } else if (ch == ' ' || ch == '\n'){
            blank = blank + 1;
        } else if (ch >= '0' && ch <= '9'){
            digit = digit + 1;
        } else{
            other = other + 1;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
    return 0;
}