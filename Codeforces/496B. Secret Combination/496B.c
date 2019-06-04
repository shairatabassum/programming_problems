#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

int n;
string display, mindisplay, tempdisplay;

int main ()
{
	cin >> n;
	cin >> display;
	mindisplay = display;

	for(int i=0; i<n; i++)
	{
		tempdisplay = display;
		for(int j=0; j<9; j++)
		{
			for(int x = 0; x<n; x++)
			{
				if(tempdisplay[x] == '9')
					tempdisplay[x] = '0';
				else
					tempdisplay[x]++;
			}
			
			for(int a=0; a<n; a++)
			{
				if(mindisplay[a] == tempdisplay[a])
					continue;
				else if(mindisplay[a] > tempdisplay[a])
				{
					mindisplay = tempdisplay;
					break;
				}
				else
					break;
			}
		}
		
		
		{
			display = display.substr(n-1, 1) + display.substr(0, n-1);

			for(int a=0; a<n; a++)
			{
				if(mindisplay[a] == display[a])
					continue;
				else if(mindisplay[a] > display[a])
				{
					mindisplay = display;
					break;
				}
				else
					break;
			}
		}
	}
	cout << mindisplay << endl;

	return 0;
}