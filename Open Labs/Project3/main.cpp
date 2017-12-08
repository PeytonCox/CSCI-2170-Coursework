using namespace std;

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <iomanip>
#include <stdlib.h>

void openFile(string, ifstream&);
void balanceCalculation(ifstream&);

//global variables
double balance = 0;

int main(){
	
	string fileName;
	ifstream inputFile;
	
	
	
	openFile(fileName, inputFile);
	balanceCalculation(inputFile);
	
}


void openFile(string fileName, ifstream& inputFile){
	
	
	cout << "Please enter a filename: ";
	cin >> fileName;
	cout << "You entered " << fileName << endl;
	cout << endl;
	
	inputFile.open(fileName.c_str());
	
	if(inputFile.is_open() != true){
		cerr << "ERROR! Could note open file: " << fileName << endl;
		exit(1);
	}
	
}

void balanceCalculation(ifstream& inputFile){
	
	char fileRead;
	float numRead;
	int wLimit;
	string errorRead;
	
	while(inputFile>>fileRead){
		switch(fileRead){
			case 'b':
			case 'B':
				cout << "Balance: $" << balance << endl;
				break;
			case 'w':
			case 'W':
				inputFile>>numRead;
				if(wLimit >= 3){
					cout << "All 3 withdrawals have already been made (withdrawal of $" << fixed << setprecision(2) << numRead << " not made)!" << endl;
				}
				else if((balance-numRead) < 0){
					cout << "Insufficient funds ($" << fixed << setprecision(2) << balance << ") (withdrawal of $" << setprecision(2) << numRead << " not made)!" << endl;
				}
				else{
					balance = balance-numRead;
					cout << "Balance (after withdrawal): $" << fixed << setprecision(2) << balance << endl;
					wLimit++;
				}
				break;
			case 'd':
			case 'D':
				inputFile>>numRead;
				balance = balance + numRead;
				cout << "Balance (after deposit): $" << fixed << setprecision(2) << balance << endl;
				break;
			default:
				inputFile>>errorRead;
				cerr << "ERROR! fileRead != 'W' or 'D'!" << endl;
				break;
		}
		
	}
	cout << fileRead << numRead << endl;
	
}
