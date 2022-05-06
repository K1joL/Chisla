#include <iostream>
#include <cmath>
using namespace std;

void Prime(int n)
{
	long int primenum[10000] = {0};
	int primeindex = 0, sq = 0;
	for (long int num = 2; primeindex < n-1; num += 2)
	{
		if (num == 2)
		{
			cout << num << ' ';
			num++;
		}

		sq = (int)sqrt(num);
		int countD = 0;
		for (int i = 1; i <= sq; i += 2)
		{
			int primeD = 0;
			for (int j = 0; j < 20; j++)
			{
				if (primenum[j])
				{
					if (num % primenum[j] == 0)
					{
						primeD++;
						break;
					}
				}
				else 
				{ 
					break; 
				}
			}
			if (primeD)
			{
				break;
			}
			if (num % i == 0)
			{
				countD++;
				break;
			}
		}
		if (countD)
		{
			if (primenum[primeindex] == 0)
			{
				primenum[primeindex] = num;
				primeindex++;
			}
			cout << num << ' ';
		}
	}
}
int main()
{
	int n;
	cout << "\nEnter number of numbers\n";
	cin >> n;
	Prime(n);

	return 32;
}
