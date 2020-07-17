#include<stdio.h>

int main() {
    int a_point=0, b_point=0;
    int a[3], b[3];
    for(int i=0; i<3; i++)
        scanf("%d", &a[i]);
    for(int i=0; i<3; i++)
        scanf("%d", &b[i]);

    for(int i=0; i<3; i++) {
        if(a[i] > b[i])
            a_point++;
        else if(b[i] > a[i]) 
            b_point++;
    }
    printf("%d %d\n", a_point, b_point);
    return 0;
}