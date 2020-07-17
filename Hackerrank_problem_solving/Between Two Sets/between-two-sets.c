#include<stdio.h>

int main() {
    int n, m, a[100], b[100];
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(int i=0; i<m; i++)
        scanf("%d", &b[i]);

    int count=0;
    for(int i=1; i<=100; i++) {
        int flag=0;
        for(int j=0; j<n; j++) {
            if(i%a[j]==0)
                flag=1;
            else {
                flag=0;
                break;
            }
        }
        for(int k=0; k<m; k++) {
            if(flag==0) break;
            if(b[k]%i==0)
                flag=1;
            else {
                flag=0;
                break;
            }
        }
        if(flag==1)
            count++;
    }
    printf("%d\n", count);
    return 0;
}