#ifndef STATEMENT_H
#define STATEMENT_H
#include<vector>
#include"transaction.h"
class Statement
{
	public:
	
	Statement();
	
	void addtransaction();
	
	int averagei();

	void print();

	private:

	std::vector<Transaction> m_transactions;

	std::vector<int>  m_balance;


	
};

#endif
