#include<stdio.h>

int main() {
    int n, k, arr[100], count=0;
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(i<j) {
                if((arr[i]+arr[j])%k == 0)
                    count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}