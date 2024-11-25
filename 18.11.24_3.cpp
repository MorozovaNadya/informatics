#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b = 0;
    cout << "Введите первые два числа последдовательности: ";
    cin >> a >> b;
    int* ptra = &a;
    int* ptrb = &b;
    int c = *ptra + *ptrb; //3 число

    int* ptrc = &c;
    a = *ptrb;
    b = *ptrc;
    *ptrc = a + b; //4 число

    a = *ptrb;
    b = *ptrc;
    *ptrc = a + b; //5 число

    a = *ptrb;
    b = *ptrc;
    *ptrc = a + b; //6 число
    cout << "5-е число в последоваельности = " << *ptrc << endl;
    return 0;
}