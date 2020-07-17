#include<stdio.h>

int main() {
    long n, arr[100000], max=0;
    scanf("%ld", &n);
    for(int i=0; i<n; i++) {
        scanf("%ld", &arr[i]);
        if(arr[i] > max)
            max = arr[i];
    }

    long count=0;
    for(int i=0; i<n; i++) {
        if(arr[i]==max)
            count++;
    }
    printf("%ld\n", count);
    return 0;
}