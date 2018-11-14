#include<iostream>
#include"transaction.h"

Transaction::Transaction()
{
	m_day = 0;
	m_amount = 0;
	m_comment = "No transaction";
}

Transaction::Transaction( int day, int amount, std::string comment)
{
	m_day = day;
	m_amount = amount;
	m_comment = comment;
}

void Transaction::print()
{ 
	std::cout << m_day << std::endl;
	std::cout << m_amount << std::endl;
	std::cout << m_comment << std::endl;
}

int Transaction::day()
{
	return m_day;
}
int Transaction::amount()
{
	return m_amount;
}
std::string Transaction::comment()
{
	return m_comment;
}
