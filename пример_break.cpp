#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 8; i++)
	{
		if (i == 5) break;
		cout << i << '\n';
	}

	for (int j = 1; j < 8; j++)
	{
		if (j < 5)
			cout << j << '\n';
	}

	return 0;
}