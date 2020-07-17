#include<stdio.h>

int main() {
    int n, grades[100];
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &grades[i]);

        if(grades[i] >= 38 && grades[i]%5 >= 3) {
            while(grades[i]%5 != 0)
                grades[i]++;
        }
        printf("%d\n", grades[i]);
    }
    return 0;
}