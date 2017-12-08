/*
 * 
 * Name: Peyton Cox
 * Date: 5/5/2017
 * Description: "Header file for Cashier Class"
 * 
 */

//gaurd
#ifndef CASHIER_H
#define CASHIER_H

#include "Employee.h"

//decare Class Cashier with Employee inheritence
class Cashier:public Employee{
public:
	
	//default constructor
	Cashier();
	
	//parameterized constructor
	Cashier(std::string addName, float addWage);
	
	//polymorphic display function
	void display();
	
	
};


#endif
