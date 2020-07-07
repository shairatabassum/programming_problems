#include <stdio.h>
#include<string.h>

int main()
{
	char a[100000];
	while(scanf("%s",a)!=EOF)
	{
		for(int i=0;i<strlen(a);i++)
		{
			printf("%c",a[i]-7);
			
		}
		printf("\n");
	}
return 0;
}