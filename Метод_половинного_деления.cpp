#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

float f(float x)
{
	return sqrt(1 - 0.4 * pow(x, 2)) - asin(x);
}

int main()
{
	float a, b, c;
	float e = 0.001;
	setlocale(LC_ALL,"rus");
	cout << "Введите значения отрезка [a;b]: ";
	cin >> a >> b;
	while (abs(a - b) > e)
	{
		c = (a + b) / 2;
		cout << c << endl;
		if (f(b) * f(c) < 0)
			a = c;
		else
			b = c;
	}
	cout << c;
	return 0;
}