#include<stdio.h>

int main() {
    int n, p;
    scanf("%d%d", &n, &p);

    int min = (n/2) - (p/2);
    if(min > p/2)
        min = p/2;
    printf("%d\n", min);
    return 0;
}