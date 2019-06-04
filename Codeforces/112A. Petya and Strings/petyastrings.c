#include<stdio.h>
#include<string.h>
int main()
{
    char a[101], b[101];
    scanf("%s", a);
    scanf("%s", b);
    int len = strlen(a);
    int i;
    for(i=0; i<len; i++)
    {
        if(a[i] >= 65 && a[i] <= 90)
        {
            a[i] += 32;
        }
        if(b[i] >= 65 && b[i] <= 90)
        {
            b[i] += 32;
        }
    }
    if(strcmp(a,b) > 0)
    {
        printf("1\n");
    }
    else if(strcmp(a,b) < 0)
    {
        printf("-1\n");
    }
    else
    {
        printf("0\n");
    }
    return 0;
}
