#include <iostream>
using namespace std;

int main()
{
    int a,b=0;
    cout<< "Enter a and b values for ax=b: ";
    cin>>a>>b;
    if (a!=0)
    cout<< "x = " << b/a;
    else
    cout<< "Error";
    return 0;
}
