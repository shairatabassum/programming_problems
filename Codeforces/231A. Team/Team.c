#include<stdio.h>
int main()
{
    int n, i, j, ans, count = 0, solution = 0;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        count = 0;
        for(j=0; j<3; j++)
        {
            scanf("%d", &ans);
            if(ans == 1)
            {
                count++;
            }
        }
        if(count >= 2)
        {
            solution++;
        }
    }
    printf("%d\n", solution);
    return 0;
}
