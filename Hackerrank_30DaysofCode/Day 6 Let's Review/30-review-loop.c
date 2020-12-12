#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int T;
    scanf("%d", &T);
    for(int i=0; i<T; i++) {
        char str[10001];
        scanf("%s", str);
        int len = strlen(str);

        for(int i=0; i<len; i=i+2)
            printf("%c", str[i]);
        printf(" ");
        for(int i=1; i<len; i=i+2)
            printf("%c", str[i]);
        printf("\n");
    }   
    return 0;
}
