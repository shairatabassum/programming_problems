#include<stdio.h>

int main ()
{
	int i, j;
	
	while(scanf("%d%d", &i, &j) != EOF)
	{
		int input1 = i;
		int input2 = j;
		int maxcycle = 0;

		if(i>j)
		{
			int temp = i;
			i = j;
			j = temp;
		}

		for(int a=i; a<=j; a++)
		{
			int n = a;
			int cycle = 1;

			while(n!=1)
			{
				if(n%2 != 0)
					n = 3*n + 1;
				else
					n = n/2;
				cycle ++;
			}

			if(cycle > maxcycle)
				maxcycle = cycle;
		}
		printf("%d %d %d\n", input1, input2, maxcycle);
	}

	return 0;
}