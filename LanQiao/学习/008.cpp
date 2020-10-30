#include <cstdio>
#include <cstring>
char s[10005];
int main(){
    int len;
    scanf("%s", s);
    len = strlen(s);
    if ((s[len - 1] - '0') %2 == 0){
        printf("YES\n");
    } else{
        printf("NO\n");
    }
    return 0;
}
