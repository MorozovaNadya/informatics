#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

float f(float x)
{
	return sin(sqrt(1 - 0.4 * pow(x, 2)));
}

float f1(float x)
{
	return -0.4 * x * cos(sqrt(1 - 0.4 * pow(x, 2))) / sqrt(1 - 0.4 * pow(x, 2));
}

int main()
{
	float x, x1;
	float e = 0.001;
	setlocale(LC_ALL,"rus");
	cout << "Введите начальное значение x: ";
	cin >> x;
	x1 = f(x);
	cout << x1 << endl;
	cout << "x1 - x = " << abs(x1 - x) << endl;
	while (abs(x1 - x) > e)
	{
		x = x1;
		x1 = f(x);
		cout << x1 << endl;
		cout << "x1 - x = " << abs(x1 - x) << endl;
	}
	cout << x1;
	return 0;
}