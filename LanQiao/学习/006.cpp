#include <cstdio>
#include <cstring>
char s[105], ans[105];
int anslen = 0;
int main(){
    int N, len;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%s", s);
        len = strlen(s);
        if (len > anslen) {
            anslen = len;
            strcpy(ans, s);
        }
    }
    printf("%s\n", ans);
    return 0;
}