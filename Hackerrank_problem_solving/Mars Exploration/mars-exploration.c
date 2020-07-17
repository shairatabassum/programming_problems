#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    
    int count = 0;
    for(int i=0; i<len; i=i+3) {
        if(str[i]!='S') count++;
        if(str[i+1]!='O') count++;
        if(str[i+2]!='S') count++;
    }
    printf("%d\n", count);

    return 0;
}