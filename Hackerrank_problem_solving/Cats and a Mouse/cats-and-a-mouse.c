#include<stdio.h>
#include<math.h>

int main() {
    int q;
    scanf("%d", &q);
    for(int i=0; i<q; i++) {
        int x, y, z;
        scanf("%d%d%d", &x, &y, &z);

        if(abs(x-z) == abs(y-z))
            printf("Mouse C\n");
        else {
            if(abs(x-z) < abs(y-z))
                printf("Cat A\n");
            else
                printf("Cat B\n");
        }
    }
    return 0;
}