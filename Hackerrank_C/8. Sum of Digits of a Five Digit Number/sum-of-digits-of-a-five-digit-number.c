#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum = 0, remaining = 0;

    while(n>0)
    {
        remaining = n%10;
        sum += remaining;
        n /= 10;
    }
    printf("%d\n", sum);

    return 0;
}
