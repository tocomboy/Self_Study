#include <stdio.h>
#include <string.h>

int main(){
    int T, i;
    char str[1000];
    scanf("%d", &T);
    for(i=0; i<T; i++){
        scanf("%s", str);
        printf("%c%c\n", str[0], str[strlen(str)-1]);
    }

    return 0;
}