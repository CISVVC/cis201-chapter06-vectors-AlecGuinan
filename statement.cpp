#include<iostream>
#include<string>
#include"statement.h"
#include"transaction.h"

Statement::Statement()
{
	std::vector<Transaction> m_transactions;

	std::vector<int> m_balance;
}

void Statement::addtransaction()
{
	std::string comment;
	int amount;
	int day;
	std::cout << "Please enter the day: " << std::endl; 
	std::cin >> day;
	std::cout << "Please enter transaction amount with no decimal: $" << std::endl;
	std::cin >> amount;
	std::cout << "Please enter transaction type: " << std::endl;
	std::cin >> comment; 
	Transaction s(day, amount, comment);
	m_balance = amount + m_balance;
	m_transactions.push_back(s); 
	
}

int Statement::averagei()
{
	int days = 0; 
	for( int i = 0; i < m_transactions.size(); i++)
	{
		if(days >= 30)
		{
			m_balance = m_balance + (m_balance / 30);
			days = days - 30;
		}
			days ++;
	}
}
void Statement::print()
{
	for( int i = 0; i < m_transactions.size(); i++)
	{
		Transaction b;
		b = m_transactions[i];
		std::cout << "The day is " << b.day() << " ";
		std::cout << "The transaction amount is " << b.amount()/100 << "." << b.amount()%100 << " ";
		std::cout << b.comment() << std::endl;
	}
	std::cout << "The total balance is " << m_balance/100 << "." << m_balance%100 << std::endl;
}
