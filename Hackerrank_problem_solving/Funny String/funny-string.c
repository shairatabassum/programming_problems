#include<stdio.h>
#include<string.h>
#include<math.h>

int main() {
    int q;
    scanf("%d", &q);
    for(int i=0; i<q; i++) {
        char str[10001];
        scanf("%s", str);
        int len=strlen(str);

        int j=len-1, funny=1;
        for(int i=0; i<len-1; i++) {
            if(abs(str[i]-str[i+1]) != abs(str[j]-str[j-1])) {
                funny=0;
                break;
            }
            j--;
        }
        if(funny==1)
            printf("Funny\n");
        else
            printf("Not Funny\n");
    }
    return 0;
}