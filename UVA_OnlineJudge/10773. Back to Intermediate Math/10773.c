#include<stdio.h>
#include<math.h>

int main()
{
	double d, v, u;
	int t;
	scanf("%d", &t);

	for (int i=0; i<t; i++)
	{
		scanf("%lf%lf%lf", &d, &v, &u);

		if(v>=u || d==0 || v==0 || u==0)
		{
			printf("Case %d: can't determine\n", i+1);
		}

		else
		{
			double fast = d/u;
			double slow = d / sqrt(u*u - v*v);
			double diff = abs(slow - fast);
			printf("Case %d: %.3lf\n", i+1, diff);
		}
	}
	return 0;
}