/*
 * 
 * Name: Peyton Cox
 * Date: 5/5/2017
 * Description: "Header file for Manager Class"
 * 
 */

//gaurd
#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"

//declare class Manager with inheritence from Employee
class Manager: public Employee{
public:
	//default constructor
	Manager();
	
	//parameterized constructor
	Manager(std::string addName, float addWage, int addId);
	
	//polymorphic display function
	void display();
	
	//polymorphic payroll function
	void payroll();
	
};


#endif
