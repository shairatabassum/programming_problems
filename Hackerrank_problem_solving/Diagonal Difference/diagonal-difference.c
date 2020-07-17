#include<stdio.h>
#include<math.h>

int main() {
    int n, arr[100][100];
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &arr[i][j]);

    int d1=0, d2=0, temp=n-1;
    for(int i=0; i<n; i++)
        d1 += arr[i][i];
    for(int i=0; i<n; i++) {
        d2 += arr[i][temp];
        temp--;
    }

    int diff = abs(d1-d2);
    printf("%d\n", diff);
    return 0;
}