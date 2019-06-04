#include<stdio.h>

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	int count = 0;
	while(a>= 1 && b>=2 && c>=4)
	{
		a -= 1;
		b -= 2;
		c -= 4;

		count += 7;
	}

	if(count != 0)
		printf("%d\n", count);
	else
		printf("0\n", count);

	return 0;
}
