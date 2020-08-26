#include <iostream>
#include "calc_lib/add.h"
#include "calc_lib/multiply.h"
#include "print_lib/print_result.h"
#include "bank.h"

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

    int *p = new (int);
    *p = 32;

    result = Add(x,y);
    Print_Result(result);

    resultd = Add(a,b);
    Print_Result(resultd);  

    result = Multiply(x,y);
    Print_Result(result);

    resultd = Multiply(a,b);
    Print_Result(resultd);

    BankAccount member1("Ramu",2001);
    member1.creditAmount(a);
    member1.printDetails();

    BankAccount member2("Vishnu",2002);
    member2.creditAmount(b);
    member2.printDetails();

    return 0;
}
