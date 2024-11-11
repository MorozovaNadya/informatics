#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A, B, C = 0;
    cout<< "Enter A, B and C values for Ax^2 + Bx + C = 0: ";
    cin>> A >> B >> C;
    float D = B*B - 4*A*C;
    switch (A)
    {
    case 0:
        cout<< "This is not a quadratic equation";
        break;
    default:
    if (D==0)
    {
        cout<< "x = " << (-B)/(2*A);
    }
    else if (D>0)
    {
        cout<< "x1 = " <<  (-B + pow(D, 0.5))/(2*A) << endl;
        cout<< "x2 = " << (-B - pow(D, 0.5))/(2*A) << endl;
    }
    else
    cout<< "There aren't roots";
        break;
    }
    return 0;
}