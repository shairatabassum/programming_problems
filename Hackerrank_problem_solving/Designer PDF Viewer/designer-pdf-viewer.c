#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int letters[30];
    for(int i=0; i<26; i++)
        scanf("%d", &letters[i]);
    char word[12];
    scanf("%s", word);
    int len = strlen(word);

    int max=-1;
    for(int i=0; i<len; i++) {
        int index = (int)(word[i]) - 97;
        if(letters[index] > max)
            max = letters[index];
    }
    int area = max*len;
    printf("%d\n", area);

    return 0;
}