#include<stdio.h>

int main() {
    long arr[5], sum=0;
    for(int i=0; i<5; i++) {
        scanf("%ld", &arr[i]);
        sum += arr[i];
    }

    long min=999999999, max=0;
    for(int i=0; i<5; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
    int maxSum = sum - min;
    int minSum = sum - max;
    printf("%ld %ld\n", minSum, maxSum);
    return 0;
}