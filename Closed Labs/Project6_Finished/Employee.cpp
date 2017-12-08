/*
 * 
 * Name: Peyton Cox
 * Date: 5/5/2017
 * Description: "implementation code for Employee class"
 * 
 */

#include <string>
#include <iostream>
#include <iomanip>
#include "Employee.h"

using std::cout;
using std::endl;
using std::string;

//default contructor
Employee::Employee(){
	name = "";
}

//parameterized constructor
Employee::Employee(string addName){
	//calls setName to set name of employee
	setName(addName);
}

//sets name of Employee
void Employee::setName(string addName){
	name = addName;
}

//sets wage of Employee
void Employee::setWage(float addWage){
	wage = addWage;
}

//sets id of Employee
void Employee::setId(int addId){
	id = addId;
}


///////////////////////////////////////////////////
// I had to do display and payroll this way because
//	I believe that since the values are stored in a
//	vector they lose their identity as anything but
//	an employee, but I do understand how polymorphism
//	normally works
///////////////////////////////////////////////////


//prints the corresponding information of the employee
void Employee::display(){
	//if not a standard employee
	if(wage != 7.25){
		//if not a manager
		if(id != NULL){
			cout << "\t" << name << " (Manager id: " << id << ", weekly wage: $" << wage << ")" << endl;
		}
		//if a manager
		else{
			cout << "\t" << name << " (Cashier hourly wage: $" << wage << ")" << endl;
		}
	}
	//if a standard employee
	else{
		cout << "\t" << name << endl;
	}
}

//prints the weekly payroll of the employee
void Employee::payroll(){
	//if not a manager
	if(id == NULL){
		//print out hourly wage for 40 hours in a week
		cout << "\t" << name << " $" << std::fixed << std::setprecision(2) << wage*40 << endl;
	}
	//if a manager
	else{
		//print out weekly salary instead of hourly pay
		cout << "\t" << name << " $" << std::fixed << std::setprecision(2) << wage << endl;
	}
}

//returns the name of the employee
std::string Employee::returnName(){
	return name;
}
