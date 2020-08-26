#ifndef BANK_CLASS_HEADER_H
#define BANK_CLASS_HEADER_H

#include <string>

class BankAccount {

private:
    std::string m_name;
    int m_account_number;
    double m_amount;

public:
	BankAccount(std::string name, int account_number);
    void creditAmount(double amount);
    void debitAmount(double amount);
    void printDetails();
};

#endif

