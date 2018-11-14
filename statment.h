#ifndef STATMENT_H
#define STATMENT_H
#include<vector>
#include"transaction.h"
class Statment
{
	public:
	
	Statment();
	
	void addtransaction();
	
	int averagei();

	int total();

	private:

	std::vector<Transaction> m_transactions;

	int m_balance;


	
};

#endif
