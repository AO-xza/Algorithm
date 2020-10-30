#include <cstdio>
#include <cstring>
char s[1005];
int main(){
    int len;
    scanf("%s", s);
    len = strlen(s);
    for (int i = 0; i < len; ++i) {
        if (s[i] == 'z'){
            s[i] = 'a';
        } else if (s[i] == 'Z'){
            s[i] == 'A';
        } else if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z'){
            s[i] ++;
        }
    }
    printf("%s\n", s);
    return 0;
}
