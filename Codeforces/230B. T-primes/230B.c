#include<iostream>
#include<cmath>
using namespace std;

int Prime(long long num)
{
	int flag = 0;
	if(num < 2)
		return 0;
	else if(num == 2)
		return 1;

	long long test = sqrt(num);

	if(num%2 == 0)
		return 0;
	for(int i = 3; i<= test; i+=2)
	{
		if(num%i == 0)
			return 0;
	}
	return 1;
}

int main()
{
    int n;
	cin >> n;

	for(int i=0; i<n; i++)
	{
		long long num;
		cin >> num;
        long long sqr = sqrt(num);
        
		if(sqr*sqr == num && Prime(sqr) == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}