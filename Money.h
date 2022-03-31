#ifndef MONEY_H
#define MONEY_H

#include <iostream>

using namespace std;

class Money
{
public: 
	int dollars;
	int cents; 
	Money(): dollars(0), cents(0) {}
	
	Money(int dollars, int cents)
	{
		Money() = Money();
	}
	
	Money operator =(const Money& s)
	{
		Money m; 
		m.dollars = s.dollars;
		m.cents = s.cents; 
		return m;
	} 

	
	friend ostream& operator<<(ostream& os, const Money& m)
	{
		os << "$" << m.dollars << "." << m.cents << endl;
		return os;
	}
};





	
	











#endif //MONEY_H
