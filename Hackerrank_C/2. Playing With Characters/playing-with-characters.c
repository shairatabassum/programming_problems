#include stdio.h
#include string.h
#include math.h
#include stdlib.h

int main() 
{
    char a;
    char b[20];
    char c[100];
    scanf("%c", &a);
    gets(b);
    fflush(stdin);
    gets(c);

    printf("%c%s%s\n", a, b, c);   
    return 0;
}