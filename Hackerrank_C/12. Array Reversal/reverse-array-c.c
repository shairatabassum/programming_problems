#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int series[1000];
    int len;
    scanf("%d", &len);

    for(int i=0; i<len; i++)
        scanf("%d", &series[i]);

    for(int i=len-1; i>=0; i--)
        printf("%d ", series[i]);
    
    return 0;
}
