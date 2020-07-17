#include<stdio.h>

int main() {
    int n, arr[100];
    float pos=0.0, neg=0.0, zero=0.0;
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0)
            zero++;
        else if(arr[i] > 0)
            pos++;
        else
            neg++;
    }
    pos /= n;
    neg /= n;
    zero /= n;
    printf("%f\n%f\n%f\n", pos, neg, zero);
    return 0;
}