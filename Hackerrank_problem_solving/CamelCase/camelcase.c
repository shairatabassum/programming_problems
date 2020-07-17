#include<stdio.h>
#include<string.h>

int main() {
    char str[100001];
    scanf("%s", str);
    int len = strlen(str);

    int count=1;
    for(int i=0; i<len; i++) {
        if(str[i]>='A' && str[i]<='Z')
            count++;
    }
    printf("%d\n", count);
    return 0;
}