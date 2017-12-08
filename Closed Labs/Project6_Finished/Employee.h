/*
 * 
 * Name: Peyton Cox
 * Date: 5/5/2017
 * Description: "Header file for Employee Class"
 * 
 */

//guard
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

//declare class Employee
class Employee{
public:
	//default constructor
	Employee();
	
	//parameterized constructor
	Employee(std::string name);
	
	//sets name of Employee
	void setName(std::string addName);
	
	//sets wage of Employee
	void setWage(float addWage);
	
	//sets id of Employee
	void setId(int addId);
	
	//prints the corresponding information of the employee
	void display();
	
	//prints the weekly payroll of the employee
	void payroll();
	
	//returns the name of the employee
	std::string const returnName();
	
protected:
	float wage = 7.25;
	std::string name;
	int id = NULL;
	int hours = 40;
};


#endif
