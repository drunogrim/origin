#include <iostream>
#include "functions.h"

using namespace std;

void main()
{
    int a, b;
    a = input_var();
    b = input_var();
    switch (input_oper()) {
    case 1:  
        addition(a, b);
        break;
    case 2:
        subtraction(a, b);
        break;
    case 3:
        multiplication(a, b);
        break;
    case 4:
        division( a, b);
        break;
    case 5:
        exponentiation(a, b);
        break;
    }
    cout << endl;
}
