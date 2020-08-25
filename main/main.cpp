#include <iostream>
#include "calc_lib/add.h"
#include "calc_lib/multiply.h"
#include "print_lib/print_result.h"

using namespace std;

int main()
{
    cout << "Om " << "Namo " << "Narayanaya!" << endl;

    int x,y,result;
    float a,b,resultd;

    cout << "Enter two numbers" << endl;
    cin >> x >> y;

    a = x+2.2;
    b = y+1.5;

    result = Add(x,y);
    Print_Result(result);

    resultd = Add(a,b);
    Print_Result(resultd);  

    result = Multiply(x,y);
    Print_Result(result);

    resultd = Multiply(a,b);
    Print_Result(resultd);

    return 0;
}
