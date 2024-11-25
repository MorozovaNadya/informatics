#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b, maxim;
    cout << "Введиде значения a и b: ";
    cin >> a >> b;
    int* ptra = &a;
    int* ptrb = &b;
    if (a > b)
    {
        maxim = *ptra;
        cout << "Максимальное значение = " << maxim << ", а его адрес: " << ptra << endl;
    }
    else
    {
        if (b > a)
        {
            maxim = *ptrb;
            cout << "Максимальное значение = " << maxim << ", а его адрес: " << ptrb << endl;
        }
        else
        {
            maxim = *ptrb;
            cout << "Значения одинаковы, поэтому максимальное значение = " << maxim << " , и адрес: " << ptrb << endl;
        }
    }
    return 0;
}