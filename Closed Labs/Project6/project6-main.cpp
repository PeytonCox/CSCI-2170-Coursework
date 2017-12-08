/*
 * 
 * Name: Peyton Cox
 * Date: 5/5/2017
 * Description: "Driver code for employee payroll program"
 * 
 */

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h> // for exit()
#include <iomanip> // fixed, setprecision()
#include <vector>

#include "Employee.h"
#include "Cashier.h"
#include "Manager.h"

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::getline;
using std::ifstream;
using std::fixed;
using std::setprecision;

bool DEBUG = false; // toggles extra printing

const string DEFAULT_INPUT_FILENAME  = "project6-testA.tab";

// Action characters in the input file
const char ADD_EMPLOYEE = 'E';
const char ADD_CASHIER = 'C';
const char ADD_MANAGER = 'M';
const char REMOVE = 'R';
const char PAYROLL = 'P';
const char FIND = 'F';
const char DISPLAY_ALL = 'D';

//displays all of employees within the vector
void displayAll(vector<Employee> passedVector){
	//copies passedVector to tempVector because I thought I was going to have
	// pop the list until I was done but then I remembered I can just cycle through vectors
	vector<Employee> tempVector = passedVector;
	//count variable for cycling through vector
	int count = 0;
	//if only value is in the vector print "employee" singular
	if(tempVector.size() == 1){
		cout << "Displaying " << tempVector.size() << " employee:" << endl;
	}
	//otherwise print "employees" plural
	else{
		cout << "Displaying " << tempVector.size() << " employees:" << endl;
	}
	//as long as the vector isnt empty cycle through it until you've printed all of the contents
	while (count < passedVector.size() && !passedVector.empty()){
		//more documentation in Employee.cpp on how this works
		tempVector[count].display();
		//increase count
		count++;
	}
	//spacing for output matching
	cout << endl;
}

//prints out the weekly payroll for all employees within the passed vector
void payroll(vector<Employee> passedVector){
	//count variable for cycling through vector
	int count = 0;
	cout << "Weekly payroll:" << endl;
		//as long as the vector isnt empty cycle through it until you've printed all of the weekly payrolls
	while (count < passedVector.size() && !passedVector.empty()){
		//more documentation in Employee.cpp on how this works
		tempVector[count].payroll();
		//increase count
		count++;
	}
	
}

// Process the inputs in inputFilename
void processInputs( string inputFilename ){

    // declare an STL container named employees here
	vector<Employee> employees;
	
	int count;
    
    // open file
    ifstream fileStream;
    fileStream.open( inputFilename.c_str() );

    // verify the file is opened correctly
    if( ! fileStream ){
        cerr << "ERROR: Can not open input file " << inputFilename << "!" << endl;
        exit(1);
    }

    cout << "Importing instructions from " << inputFilename << " ..." << endl;
    
    char action = '\0';
    
    // while there's more patients to process
    // read in the action and make sure that we're not at the end of the file
    while( fileStream >> action ){
        if( DEBUG ){ cout << "action: " << action << endl; }
        string name;
        switch( action ){

        case ADD_EMPLOYEE:
            // get the employee's name from the file
            fileStream >> name;
            cout << "Adding employee " << name << endl;
			//put new employee in the back of the vector
			employees.push_back(Employee());
			//assign name to last added Employee
			employees.back().setName(name);
			//spacing for output matching
            cout << endl;
            if( DEBUG ){ displayAll( employees); }
            break;
        case ADD_CASHIER:
            // get the employee's name from the file
            fileStream >> name;
            float hourlyWage;
            fileStream >> hourlyWage;
            cout << "Adding cashier " << name << endl;
			
			//put new cashier in the back of the vector
			employees.push_back(Cashier());
			//assign name to the last employee added
			employees.back().setName(name);
			//assign hourly wage to the last employee added
			employees.back().setWage(hourlyWage);
			//spacing for output matching
            cout << endl;
			
            if( DEBUG ){ displayAll( employees); }
            break;
        case ADD_MANAGER:
            // get the employee's name from the file
            fileStream >> name;
            int id;
            fileStream >> id;
            float salary;
            fileStream >> salary;
            cout << "Adding manager " << name << endl;
			
			//put new manager in the back of the vector
			employees.push_back(Manager());
			//assign name to the last employee added
			employees.back().setName(name);
			//assign salary to the last employee added
			employees.back().setWage(salary);
			//assign id to the last employee added
			employees.back().setId(id);
			//spacing for output matching
            cout << endl;
			
            if( DEBUG ){ displayAll( employees); }
            break;
        case REMOVE:
            // get the employee's name from the file
            fileStream >> name;
            cout << "Removing " << name << endl;
			//reset count to 0
			count = 0;
			//if employees is empty just print out "Unable to remove"
			if(employees.empty()){
				cout << "Unable to remove " << name << endl << endl;
			}
			//cycle through employees as long as it is not empty
			while (count < employees.size() && !employees.empty()){
				//if name is found
				if (employees[count].returnName() == name){
					//erase the found employee
					employees.erase(employees.begin()+count);
					//spacing for output matching
					cout << endl;
					break;
				}
				//increase count
				count++;
			}
			//if the end of the list was reached, print out "Unable to remove"
			if(count == employees.size()+1 ){
				cout << "Unable to remove " << name << endl << endl;
			}

            break;
        case PAYROLL:
            payroll( employees );
			//spacing for output matching
			cout << endl;
            break;
        case FIND:
            // get the employee's name from the file
            fileStream >> name;
            cout << "Finding " << name << endl;
			//reset count to 0
			count = 0;
			//cycle through the vector
			while (count < employees.size()){
				//if name is found within the vector
				if (employees[count].returnName() == name){
					//print the name
					cout << employees[count].returnName() << endl << endl;
					break;
				}
				//increase count
				count++;
			}
			//if it wasn't found print out "Unable to find"
			if(count == employees.size()){
				cout << "Unable to find " << name << endl << endl;
			}
            break;
        case DISPLAY_ALL:
            displayAll( employees );
            break;
        default:
            cerr << "ERROR: Unknown action " << action << "!" << endl;
            exit(1);
        }
    }

    // close the file
    fileStream.close();
}


int main( /*int argc, char* argv[] */){

    // If just a return ('\n') is entered, then use DEFAULT_INPUT_FILENAME.
    // Otherwise, read in the input filename from STDIN.
    string inputFilename;
    cout << "Please enter the input filename (or simply press return to use " << DEFAULT_INPUT_FILENAME << ")\n";
    getline( cin, inputFilename);
    if( inputFilename == ""){
        inputFilename = DEFAULT_INPUT_FILENAME;
    }

    // process transactions in the file
    processInputs( inputFilename );
    
    return 0;
}

