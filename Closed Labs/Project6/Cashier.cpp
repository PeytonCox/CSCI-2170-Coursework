/*
 * 
 * Name: Peyton Cox
 * Date: 5/5/2017
 * Description: "implementation code for Cashier class"
 * 
 */

#include <string>
#include <iostream>
#include "Cashier.h"

using std::cout;
using std::endl;
using std::string;

//default constructor
Cashier::Cashier(){
	name = "";
}

//parameterized constructor
Cashier::Cashier(string addName, float addWage){
	//calls setName to set name of employee
	setName(addName);
	//calls setWage to set wage of employee
	setWage(addWage);
}
	
//<Polymorphic> prints the corresponding information of the employee
void Cashier::display(){
	cout << "\t" << name << " (Cashier hourly wage: $" << wage << ")" << endl;
}
