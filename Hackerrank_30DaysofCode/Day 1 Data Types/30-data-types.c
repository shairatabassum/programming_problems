#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    int i2;
    double d2;
    char s2[1000], s3[20];
    scanf("%d", &i2);
    scanf("%lf", &d2);
    fgets(s2, 1000, stdin);
    scanf("%[^\n]%*c", s2);
    
    printf("%d\n", i+i2);
    printf("%.1lf\n", d+d2);
    printf("%s%s\n", s, s2);

    return 0;
}