#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

double rec(float x, int n)
{
	if (n == 0)
		return x;
	if (n == 1)
		return rec(x, n - 1) - pow(x, 3) / 3;
	else
		return pow(-1, n) * (pow(x, 2 * n + 1) / (2 * n + 1)) + rec(x, n - 1);
}

int main()
{
	float x;
	int n;
	setlocale(0, "rus");
	cout << "Введите значение x: ";
	cin >> x;
	cout << "Введите значение n: ";
	cin >> n;
	if (n < 0)
		cout << "Ошибка, значение n должно быть положительным";
	else
		cout << "S = " << rec(x, n);
	return 0;
}  