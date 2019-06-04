#include<stdio.h>
#include<string.h>

int main()
{
    char word[101];
    int test,i;
    scanf("%d", &test);
    for(i=0; i<test; i++)
    {
        scanf("%s", word);
        int len = strlen(word);
        if(len > 10)
        {
            printf("%c%d%c\n", word[0], len-2, word[len-1]);
        }
        else
        {
            printf("%s\n", word);
        }
    }


    return 0;
}
