#include <stdio.h>
#include <cstdlib>
#include <string>
#include "employee.h"

using namespace std;

void getEmployeeData(Job& empInfo);
void displayEmployee(Job empInfo);


int main()
{
	
	Job empInfo;
	
	getEmployeeData(empInfo);
	displayEmployee(empInfo);
	
}

void getEmployeeData(Job& empInfo){
	
	string empRole;
	
	//get name
	cout << "Please enter the employee's first name: ";
	cin >> empInfo.name;
	cout << "You entered " << empInfo.name << endl;
	
	//get job position
	cout << "Please enter the employee's role (admin, engineer or staff): ";
	cin >> empRole;
		if(empRole == "admin"){
			empInfo.jobPos = admin;
		}
		else if(empRole == "engineer"){
			empInfo.jobPos = engineer;
		}
		else if(empRole == "staff"){
			empInfo.jobPos = staff;
		}
		else{
			cout << "ERROR: Unknown role!\n Exiting.." << endl;
			exit(1);
		}
	string jobStr;
	jobStr = getJobStr(empInfo.jobPos);
	cout << "You entered " << jobStr << endl;
	
	//get salary
	cout << "Please enter the employee's salary: ";
	cin >> empInfo.salary;
	cout << "You entered " << fixed << setprecision(2) << empInfo.salary << endl;
	
}

void displayEmployee(Job empInfo){
	
	string jobStr;
	jobStr = getJobStr(empInfo.jobPos);
	
	cout << "Employee " << empInfo.name << " (" << jobStr << ") is paid $" << setprecision(2) << empInfo.salary << endl;
	
}
