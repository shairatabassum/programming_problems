#include<stdio.h>

int main() {
    int n, arr[1001];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int min=arr[0], max=arr[0], minCount=0, maxCount=0;
    for(int i=0; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i];
            maxCount++;
        }
        if(arr[i] < min) {
            min = arr[i];
            minCount++;
        }
    }
    printf("%d %d\n", maxCount, minCount);
    return 0;
}