#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[1000], ch;
    int count[10];
    gets(str);
    int len = strlen(str);
    for(int i=0; i<len; i++) {
        count[i]=0;
        ch = i +'0';
        for(int j=0; j<len; j++) {
            if(str[j]==ch)
                count[i]++;
        }
    }
    for(int i=0; i<10; i++)
        printf("%d ", count[i]);
    return 0;
}
