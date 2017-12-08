/*
 * 
 * Name: Peyton Cox
 * Date: 5/5/2017
 * Description: "implementation code for Manager class"
 * 
 */

#include "Manager.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

//default constructor
Manager::Manager(){
	name = "";
};

//parameterized constructor
Manager::Manager(string addName, float addWage, int addId){
	//calls setName to set name of employee
	setName(addName);
	//calls setWage to set wage of employee
	setWage(addWage);
	//calls setId to set id of employee
	setId(addId);
};

//<Polymorphic> prints the corresponding information of the employee
void Manager::display(){
	cout << "\t" << name << "(Manager id: " << id << ", weekly wage: $" << wage << ")" << endl;
};

//<Polymorphic> prints the weekly salary of the manager
void Manager::payroll(){
	cout << "\t" << name << "$" << wage << endl;
};
