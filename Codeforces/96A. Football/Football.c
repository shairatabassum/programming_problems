#include<stdio.h>
#include<string.h>
int main()
{
    char line[110];
    scanf("%s", line);
    int len = strlen(line);
    int i;
    int count0 = 0, count1 = 0;
    for(i=0; i<len; i++)
    {
        if(line[i] == '0')
        {
            count0++;
            count1 = 0;
        }
        else if(line[i] == '1')
        {
            count1++;
            count0 = 0;
        }
        if(count0 >= 7 || count1 >= 7)
            break;
    }
    if(count0 >= 7 || count1 >= 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
