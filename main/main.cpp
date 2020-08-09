#include <iostream>
#include "calc_lib/add.h"
#include "calc_lib/multiply.h"
#include "print_lib/print_result.h"

using namespace std;

int main()
{
    cout << "Om " << "Namo " << "Narayanaya!" << endl;

    int x,y,result;

    cout << "Enter two numbers" << endl;
    cin >> x >> y;

    result = Add(x,y);
    Print_Result(result);

    result = Multiply(x,y);
    Print_Result(result);

    return 0;
}
