#include <iostream>
#include <cmath>
using namespace std;

void simple(int n)
{
	int i = 1, number = 2, sq;
	while (i <= n)
	{
		if (i == 1)
		{
			cout << number << ' ';
			number++;
			i++;
		}
		int c = 0;
		sq = (int)sqrt(number);
		for (int k = 2; k <= sq; k++)
		{
			if (number % k == 0) 
			{
				c++;
				number++;
				break;
			}
		}
		if ((c == 0))
		{
			cout << number << ' ';
			number++;
			i++;
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");

	int n;
	char exit;
	while (true)
	{
		cout << "\nВведите количество чисел\n";
		cin >> n;
		simple(n);
		cout << '\n';

		cout << "Если хотите выйти из программы введите 'x': ";
		cin >> exit;
		if (exit == 'x')
		{
			break;
		}
	}
	return 32;
}
