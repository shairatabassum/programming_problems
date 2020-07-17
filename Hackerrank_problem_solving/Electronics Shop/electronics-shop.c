#include<stdio.h>

int main() {
    int b, n, m;
    int keyboard[1000], usb[1000];
    scanf("%d%d%d", &b, &n, &m);
    for(int i=0; i<n; i++)
        scanf("%d", &keyboard[i]);
    for(int i=0; i<m; i++)
        scanf("%d", &usb[i]);
    
    int max = -1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            int sum = keyboard[i]+usb[j];
            if(sum <= b && sum > max)
                max = sum;
        }
    }
    printf("%d\n", max);
    return 0;
}