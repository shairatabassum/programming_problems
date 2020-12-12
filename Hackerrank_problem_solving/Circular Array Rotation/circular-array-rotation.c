#include<stdio.h>

int main() {
    int n, rotation, queries, arr[100001];
    scanf("%d%d%d", &n, &rotation, &queries);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int len = n;
    int count = rotation % n;

    for(int i=0; i<queries; i++) {
        int index;
        scanf("%d", &index);
        if(index - count >= 0)
            printf("%d\n", arr[index-count]);
        else
            printf("%d\n", arr[index-count+len]);
    }

    return 0;
}