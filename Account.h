#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include "Money.h"
#include <vector>

using namespace std;

class Account : protected Money
{
public:
	Account() : Money(dollars,cents) {}
	
	
	void makeDeposit(Money);
	void makeWithdrawal(Money); 
	
};

#endif //ACCOUNT_H
