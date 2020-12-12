#include<stdio.h>
#include<math.h>

int main() {
    int i, j, k, count=0;
    scanf("%d%d%d", &i, &j, &k);
    
    for(int a=i; a<=j; a++) {
        int num = a, numrev = 0;
        while (num != 0) {
            int remainder = num % 10;
            numrev = numrev * 10 + remainder;
            num /= 10;
        }
        if(abs(a-numrev)%k == 0)
            count++;
    }
    printf("%d\n", count);
    return 0;
}