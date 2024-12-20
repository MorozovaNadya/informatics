#include <iostream>
#include <clocale>
using namespace std;

void han_town(int n, int st, int fin, int temp)
{
	if (n > 0)
	{
		han_town(n - 1, st, temp, fin);
		cout << st << " => " << fin << '\n';
		han_town(n - 1, temp, fin, st);
	}
}

int main()
{
	int n, start, finish = 0;
	setlocale(0, "rus");
	cout << "Введите число дисков: ";
	cin >> n;
	han_town(n, 1, 3, 2);
	return 0;
}