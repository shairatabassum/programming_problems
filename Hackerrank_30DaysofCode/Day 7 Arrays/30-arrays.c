#include<stdio.h>

int main() {
    int n, arr[10001];
    scanf("%d", &n);
    for(int i=0; i<n; i++) 
        scanf("%d", &arr[i]);

    for(int i=n-1; i>=0; i--)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}