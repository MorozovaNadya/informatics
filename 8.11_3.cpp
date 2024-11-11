#include <iostream>
using namespace std;
 
int main()
{
    int a,b,c=0;
    cout<< "Enter a, b and c values: ";
    cin>> a >> b >> c;
    if (a>b)
    {
        if (a>c)
        cout<< "Max a = " << a;
        else
        cout<< "Max c = " << c;
    }
    else
    {
        if (b>c)
        cout<< "Max b = " << b;
        else
        cout<< "Max c = " << c;
    }
    return 0;
}