#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	char str[10];
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%s",&str);
		int length = strlen(str);
		if(length==5)
		{
			printf("3\n");
		}
		else
		{
			if(str[0]=='o'&&str[1]=='n'||str[0]=='o'&&str[2]=='e'||str[1]=='n'&&str[2]=='e')
			{
				printf("1\n");
			}
			if(str[0]=='t'&&str[1]=='w'||str[0]=='t'&&str[2]=='o'||str[1]=='w'&&str[2]=='o')
			{
				printf("2\n");
			}
		}
	}


	return 0;
}