#include<iostream>
#include<string>
#include"statment.h"
#include"transaction.h"

Statment::Statment()
{
	m_balance = 0;
}

void Statment::addtransaction()
{
	std::string comment;
	int amount;
	int day;
	std::cout << "Please enter the day: " << std::endl; 
	std::cin >> day;
	std::cout << "Please enter transaction amount: $" << std::endl;
	std::cin >> amount;
	std::cout << "Please enter transaction type: " << std::endl;
	std::cin >> comment; 
	Transaction s(day, amount, comment);
	m_balance = amount + m_balance;
	m_transactions.push_back(s); 
	
}

int averagei()
{
	for (int i = 0: i < m_transaction.size(); i++)
	{
		

