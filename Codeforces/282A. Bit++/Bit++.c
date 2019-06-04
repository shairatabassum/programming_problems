#include<stdio.h>

int main()
{
    int x = 0, test, i;
    char statement[4];
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%s", statement);
        if(statement[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    printf("%d\n", x);
    return 0;
}
