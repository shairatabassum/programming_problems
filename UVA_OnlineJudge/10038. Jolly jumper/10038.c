#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int n,arr[3000],diff[3000],counter = 1;
	while(scanf("%d",&n)!=EOF)
	{
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<n-1;i++)
		{
			diff[i] = abs(arr[i]-arr[i+1]);
		}
		int num = n-1;
		sort(diff, diff+num);
		for(int i=0;i<n-2;i++)
		{
			int check = abs(diff[i]-diff[i+1]);
			
			if(check == 1)
				continue;
			else
			{
				counter = 0;
				break;
			}
		}
		if(counter == 0)
		{
			printf("Not jolly\n");
			counter = 1;
		}
		else
		{
			printf("Jolly\n");
			counter = 1;
		}
	}


	return 0;
}