/* 
Author: Alec Guinan
Email: guinana@studnet.vvc.edu
Date Created: 11/13/18
Purpose: this program tracts transactions and calculates intrest
*/
#include<iostream>
#include"statment.h"
#include"transaction.h"
#include<string>
int main()
{
	Statment a;
	bool more = true;
	do 
	{
		
		std::string answer;
		a.addtransaction();
		std::cout << " Enter more data? (y/n): ";
		std::cin.clear();
		std::cin.ignore(9999999999999,'\n');
		std::cin >> answer;
		if(answer == "n")
		{
			more = false;
		}
	}
	while ( more );
	
	a.averagei();
	
	a.print();
	
	
}
