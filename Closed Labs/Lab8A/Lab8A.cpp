//------------------------------------------
//
//
//Name: Peyton T Cox
//Date: 2.13.17
//Description: This program reads in values from a provided file and calculates
//             the lowest and highest values, the amount of numbers read, and the
//             average of those numbers.
//
//-----------------------------------------------------------------

using namespace std;

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>
#include <iomanip>
#include <stdlib.h>

//declaring prototypes
void openFile(string& fileName, ifstream& inputFile);
void computeStatistics(ifstream& inputFile, float&, float&, float&, int&);
void displayResults(int noe, float smallestNum, float largestNum, float avgNum);
//end declaring prototypes


int main()
{
	string fileName = "!";
	ifstream inputFile;
	float largestNum = -1, smallestNum = 999999999, avgNum;
	int noe = 0; //"Number of Entries"//

	//open the file and test if it opened correctly
	openFile(fileName, inputFile);

	//calculate the largest and smallest number as well as the avg and number of entries
	computeStatistics(inputFile, largestNum, smallestNum, avgNum, noe);

	//displays the results
	displayResults(noe, smallestNum, largestNum, avgNum);

}


void openFile(string& fileName, ifstream& inputFile){
	cout << "Please enter a filename: " << endl;
	cin >> fileName;

	inputFile.open(fileName.c_str());

	//test if file is open
	if( inputFile.is_open() != true){
		cerr << "ERROR: Can not open data file!" << endl;
		exit(1);
	}

}



void computeStatistics(ifstream& inputFile, float& largestNum, float& smallestNum, float& avgNum, int& noe){
	float currentNum;
	float sum = 0;


	cout << "Values from the data file:" << endl;


	while(inputFile >> currentNum){
		if( currentNum > largestNum){
			largestNum = currentNum;
		}
		if( currentNum < smallestNum){
			smallestNum = currentNum;
		}
		cout << currentNum << endl;
		sum = currentNum + sum;
		noe++;
	}

	avgNum = sum/noe;


}



void displayResults(int noe, float smallestNum, float largestNum, float avgNum){

	//print results!
	cout << "Read in " << noe << " values" << endl;
	cout << "The smallest value is " << smallestNum << endl;
	cout << "The largest value is " << largestNum << endl;
	cout << "The average value is " << setprecision(1) << fixed <<avgNum << endl;

}
