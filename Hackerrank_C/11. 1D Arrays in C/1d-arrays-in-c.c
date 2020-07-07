#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int series[1000];
    int len, sum=0;
    scanf("%d", &len);
    for(int i=0; i<len; i++)
    {
        scanf("%d", &series[i]);
        sum += series[i];
    }
    printf("%d\n", sum);
    return 0;
}