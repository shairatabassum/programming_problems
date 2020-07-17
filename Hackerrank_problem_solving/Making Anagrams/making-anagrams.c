#include<stdio.h>
#include<string.h>

int main() {
    char str1[10001], str2[10001];
    scanf("%s", str1);
    scanf("%s", str2);
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    int count = 0;
    for(int i=0; i<len1; i++) {
        for(int j=0; j<len2; j++) {
            if(str1[i]==str2[j]) {
                count++;
                str2[j] = '0';
                break;
            }
        }
    }
    int total = (len1-count) + (len2-count);
    printf("%d\n", total);

    return 0;
}