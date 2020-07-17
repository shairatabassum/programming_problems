#include<stdio.h>

int main() {
    int n, arr[100];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int count = 0;
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if((arr[i]==arr[j]) && (arr[j] != -1)) {
                count++;
                arr[j] = -1;
                break;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}