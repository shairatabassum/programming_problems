#include<stdio.h>
#include<string.h>

int main()
{
    long len, count=0;
	char text[100000];
   
	while(gets(text))
    {
        len = strlen(text);
        for(long i=0;i<len;i++)
        {
            if(text[i] == '"')
            {
				count++;
				if(count%2 != 0)
					printf("``");
				else
					printf("''");
			}
			else
				printf("%c", text[i]);
        }
		printf("\n");
    }
    return 0;
}