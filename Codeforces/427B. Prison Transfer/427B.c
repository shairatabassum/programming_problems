#include<stdio.h>

int main()
{
	int n, t, c;
	scanf("%d%d%d", &n, &t, &c);

	int position = 0;
	int ways = 0;
	for(int i=1; i<=n; i++)
	{
		int num;
		scanf("%d", &num);

		if(i==n)
		{
			if(num <= t && i-position+1 >= c)
				ways += i-position-c + 1;
		}

		if(num > t)
		{
			if(i - position >= c)
				ways += i-position-c;
			position = i;
		}
		
	}
	printf("%d\n", ways);

	return 0;
}