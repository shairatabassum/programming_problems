#include<stdio.h>

int main()
{
	int T;
	scanf("%d", &T);
	int x, y, z;

	for(int i=0; i<T; i++)
	{
		scanf("%d%d%d", &x, &y, &z);

		int totalwork = (x+y)*60;
		int perfamily = totalwork/3;

		int familyA = x*60 - perfamily;
		int familyB = y*60 - perfamily;

		int amount = z*familyA / perfamily;

		printf("%d\n", amount);
	}
	return 0;
}