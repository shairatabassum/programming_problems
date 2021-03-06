#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
using namespace std;

int main()
{
	int t, a, b;
	while(scanf("%d", &t) != EOF)
	{
		stack <int> stc;
		queue <int> que;
		priority_queue <int> prque;

		int forstc = 0, forque = 0, forprque = 0;

		for(int i=0; i<t; i++)
		{
			scanf("%d%d", &a, &b);

			if(a == 1)
			{
				if(forstc == 0)
					stc.push(b);
				if(forque == 0)
					que.push(b);
				if(forprque == 0)
					prque.push(b);
			}
			else if(a == 2)
			{
				if(forstc == 0)
				{
					if(stc.empty() || stc.top() != b)
						forstc = 1;
					else
						stc.pop();
				}
				if(forque == 0)
				{
					if(que.empty() || que.front() != b)
						forque = 1;
					else
						que.pop();
				}
				if(forprque == 0)
				{
					if(prque.empty() || prque.top() != b)
						forprque = 1;
					else
						prque.pop();
				}
			}
		}

		if(forstc == 0 && forque == 1 && forprque == 1)
			printf("stack\n");
		else if(forstc == 1 && forque == 0 && forprque == 1)
			printf("queue\n");
		else if(forstc == 1 && forque == 1 && forprque == 0)
			printf("priority queue\n");
		else if(forstc == 1 && forque == 1 && forprque == 1)
			printf("impossible\n");
		else
			printf("not sure\n");
	}
	return 0;
}