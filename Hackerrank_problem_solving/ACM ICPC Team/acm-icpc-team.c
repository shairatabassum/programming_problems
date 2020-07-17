#include<stdio.h>
#include<time.h>

int main() {
    int n, m;
    int arr[501][501];
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%1d", &arr[i][j]);

    int max, maxtopicCount=0, maxteamCount=0;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            max=0;
            for(int k=0; k<m; k++) {
                if(arr[i][k]==1 || arr[j][k]==1) {
                    max++;
                    if(max > maxtopicCount) {
                        maxtopicCount = max;
                        maxteamCount=0;
                    }
                }
            }
            if(max==maxtopicCount)
                maxteamCount++;
        }
    }
    printf("%d\n%d\n", maxtopicCount, maxteamCount);
    return 0;
}