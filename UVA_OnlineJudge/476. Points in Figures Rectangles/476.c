#include<stdio.h>

int main()
{
	char rect;
	double x1[10], y1[10], x2[10], y2[10], x, y;
    int i=1;
    while (scanf("%c", &rect))
    {
        if (rect == '*')
			break;
		if (rect == 'r')
		{
			scanf("%lf%lf%lf%lf", &x1[i], &y1[i], &x2[i], &y2[i]);
			i++;
		}
    }

    int point = 0;
    while (scanf("%lf%lf", &x, &y) == 2)
	{
        if (x == 9999.9 && y == 9999.9)
			break;
        point++;
        int temp = 0;
        for (int j=1; j<=i; j++)
        {
            if (x > x1[j] && x < x2[j] && y < y1[j] && y > y2[j])
            {
                printf("Point %d is contained in figure %d\n", point , j);
                temp = 1;
            }
        }
        if (temp == 0)
			printf("Point %d is not contained in any figure\n", point);
    }
    return 0;
}