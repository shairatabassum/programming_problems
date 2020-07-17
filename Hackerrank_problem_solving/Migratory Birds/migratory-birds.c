#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], type[10]={0};
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        type[arr[i]]++;
    }
    int max = 0, pos = 0;
    for(int i=1; i<6; i++) {
        if(type[i] > max) {
            max = type[i];
            pos = i;
        }
    }
    printf("%d\n", pos);
    return 0;
}