#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++) {
        int n, k, arr[1000], count=0;
        scanf("%d%d", &n, &k);

        for(int j=0; j<n; j++) {
            scanf("%d", &arr[j]);
            if(arr[j] <= 0)
                count++;
        }
        if(count < k)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
