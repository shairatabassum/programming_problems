#include<stdio.h>

int main() {
    int n;
    char word[101];
    scanf("%d", &n);
    scanf("%s", word);

    int digit=1, lower=1, upper=1, special=1;
    for(int i=0; i<n; i++) {
        if(word[i]>='0' && word[i]<='9') digit=0;
        if(word[i]>='a' && word[i]<='z') lower=0;
        if(word[i]>='A' && word[i]<='Z') upper=0;
        if(word[i]=='!' || word[i]=='@' || word[i]=='#' || word[i]=='$' || word[i]=='%' || word[i]=='^' || word[i]=='&' || word[i]=='*' || word[i]=='(' || word[i]==')' || word[i]=='-' || word[i]=='+') special=0;
    }
    int condition = digit+lower+upper+special;
    if(condition < (6-n))
        condition = 6-n;
    printf("%d\n", condition);

    return 0;
}