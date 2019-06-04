#include<stdio.h>

int main()
{
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		int d,count=0;
		scanf("%d",&d);
		int nd= 180- d;
		if(360 % nd == 0)
		{
			count++;
		}

		if(count>0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}

	return 0;
}