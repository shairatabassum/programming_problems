#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    int i;
    for(i=0; i<len; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            str[i] += 32;
        }
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y')
        {
            continue;
        }
        else
        {
            printf(".%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}
