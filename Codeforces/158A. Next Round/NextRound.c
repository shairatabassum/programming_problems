#include<stdio.h>

int main()
{
    int n,k,i;
    scanf("%d%d", &n, &k);
    int score[50];
    for(i=0; i<n; i++)
    {
        scanf("%d", &score[i]);
    }
    int compare = score[k-1];
    int count = 0;
    for(i=0; i<n; i++)
    {
        if(score[i] > 0 && score[i] >= compare)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
