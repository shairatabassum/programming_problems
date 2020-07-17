#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        int n, temp, count=0;
        scanf("%d", &n);
        temp = n;
        while(temp != 0) {
            int remainder = temp%10;
            temp /= 10;
            if(remainder != 0 && n%remainder == 0)
                count++;
        }
        printf("%d\n", count);
    }
    return 0;
}