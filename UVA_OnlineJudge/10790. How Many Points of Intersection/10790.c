#include<stdio.h>

int main()
{
	long long a, b, count = 0;

	while(scanf("%lld%lld", &a, &b) == 2)
	{
		count++;
		if(a==0 && b==0)
			break;
		long long a1 = (a*(a-1)) /2;
		long long b1 = (b*(b-1)) /2;

		printf("Case %lld: %lld\n", count, a1*b1);
	}
	return 0;
}