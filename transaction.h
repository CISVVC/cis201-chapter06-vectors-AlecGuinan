#ifndef TRANSACTION_H
#define TRANSACTION_H
#include<string>

class Transaction
{
	public:

	Transaction();
	
	Transaction( int day , int amount, std::string comment);

	void print();
	
	private:
	
	int m_day;
	
	int m_amount;
	
	std::string m_comment;
};



#endif
