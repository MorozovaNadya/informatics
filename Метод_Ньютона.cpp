#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

float F(float x)
{
	return sqrt(1 - 0.4 * pow(x, 2)) - asin(x);
}
float F1(float x)
{
	return(- 0.4 * x / sqrt(1 - 0.4 * pow(x, 2))) - 1 / sqrt(1 - pow(x, 2));
}
float F2(float x)
{
	return  (-0.4 * ((sqrt(1 - 0.4 * pow(x, 2)) + 0.4 * pow(x, 2)) / sqrt(1 - 0.4 * pow(x, 2)))) / (1 - 0.4 * pow(x, 2))\
		- pow(x, 2) / pow(1 - pow(x, 2), 1.5);
}

int main()
{
	int a, b;
	float x;
	float e = 0.001;
	setlocale(LC_ALL, "rus");
	cout << "Введите значения отрезка [a;b]: ";
	cin >> a >> b;
	float k = F(a) * F2(a);
	if (k > 0)
		x = a;
	else
		x = b-0.1;
	float x1 = x - F(x) / F1(x);
	cout << "x-x1 = " << x - x1 << endl;
	cout << x1 << endl;
	while (abs(x - x1) > e)
	{
		x = x1;
		x1 = x - F(x) / F1(x);
		cout << "x-x1 = " << x - x1 << endl;
		cout << x1 << endl;
	}
	return 0;
}