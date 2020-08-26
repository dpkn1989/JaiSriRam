#include <iostream>
#include "bank.h"

BankAccount::BankAccount(std::string name, int account_number)
{
	m_name = name;
	m_account_number = account_number;
}
    
void BankAccount::creditAmount(double amount)
{
	m_amount += amount;
}
    
void BankAccount::debitAmount(double amount)
{
	m_amount -= amount;
}
    
void BankAccount::printDetails()
{
    using namespace std;

    cout << "------------------Account Details----------------" << endl;
    cout << "Name : " << "          " << m_name << endl;
    cout << "Account Number : " << m_account_number << endl;
    cout << "Account Balance: " << m_amount << endl;
    cout << endl;
}
