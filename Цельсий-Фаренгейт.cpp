#include <iostream>
#include "Cel_Far.cpp"
using namespace std;

int translater(float cel)
{
    register const int x = 32;
    auto f = (cel * p) + x;
    cout<< f;
    return 0;
}

int main()
{
    static float cel;
    cout<< "Enter the temperatyre value: ";
    cin>>cel;
    cout<< "Temperature in Fahrenheit: ";
    translater(cel);
    return 0;
}