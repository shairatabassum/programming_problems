#include<stdio.h>

int main() {
    int n, arr[10];
    long sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%ld", &arr[i]);
        sum += arr[i];
    }
    printf("%ld\n", sum);
    return 0;
}