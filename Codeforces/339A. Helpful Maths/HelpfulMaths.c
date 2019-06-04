#include<stdio.h>
#include<string.h>
int main()
{
    char math[101];
    scanf("%s", math);
    int len = strlen(math);
    int i, one = 0, two = 0, three = 0, len2 = 0;
    for(i=0; i<len; i++)
    {
        if(math[i] == '1')
            one++;
        if(math[i] == '2')
            two++;
        if(math[i] == '3')
            three++;
    }
    if(len == 1)
    {
        printf("%s\n", math);
    }
    else
    {
        len = one+two+three;
        for(i=0; i<one; i++)
        {
            len2++;
            if(len2 == len)
                printf("1");
            else
                printf("1+");
        }
        for(i=0; i<two; i++)
        {
            len2++;
            if(len2 == len)
                printf("2");
            else
                printf("2+");
        }
        for(i=0; i<three; i++)
        {
            len2++;
            if(len2 == len)
                printf("3");
            else
                printf("3+");
        }
    }
    return 0;
}
