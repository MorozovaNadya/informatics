#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b = 0;
    cout << "Введите значение a: " << endl;
    cin >> a;
    cout << "Введите значение b: " << endl;
    cin >> b;
    int* ptr = &a;
    *ptr += 2;
    ptr = &b;
    *ptr += 2;
    ptr = &a;
    cout << "Значение a после: " << *ptr << endl;
    ptr = &b;
    cout << "Значение b после: " << *ptr << endl;
    return 0;
}