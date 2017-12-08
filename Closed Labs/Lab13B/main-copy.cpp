/*
 * 
 * Name: Peyton Cox
 * Date: 2/8/2017
 * Description: "Takes in numbers into an array(current set to 10000),
 * 				 allows you to search through the unsorted array, then sorts
 * 				 and posts the array in ascending order."
 * 
 */

#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	 
	//declaring variables
	////you could make a request for a different array size if needed
	int arraySize = 10000;
	//the array defined by arraySize's value
	int numList[arraySize];
	//number to have it's index location searched for
	int indexSearch;
	//the size of the index
	int indexSize = 0;
	//the smallest number found for the sorting loops
	int smallestNum;
	//the position to start searching from in the sorting loops
	int posVar = 1;
	//the position of the smallest number found to switch the original value to
	int smallNumPos;
	//variable that holds the midpoint of the current indices being searched
	int midPoint = arraySize/2;
	
	int upperIndices = arraySize;
	int lowerIndices = 0;
	
	int iterations;
	
	
	cout << "Please enter " << arraySize << " numbers:" << endl; 
	
	//takes in the numbers for the size of the array
	for(int i = 0; i < arraySize; i++){
		cin >> numList[i];
		indexSize++;
	}
	
	cout << "You entered:" << endl;
	
	//Posts the current array
	for(int i = 0; i < arraySize; i++){
		cout << numList[i] << endl;
	}
	
	//asks for a number to search for in the array
	cout << "\nPlease enter a number to search for:" << endl;
	cin >> indexSearch;
	cout << "You entered " << indexSearch << endl;
	
	//searches and posts the index that the previous number was found at
	for(int iterations = 0; iterations <= indexSize; iterations++){
		if(indexSearch == numList [iterations]){
			cout << "Linear search used " << iterations << " iterations" << endl;
			cout << indexSearch << " is located at index " << iterations << endl << endl; 
			break;
		}
		else if(iterations == indexSize && indexSearch != numList [iterations]){
			cout << "Linear search used " << iterations << " iterations" << endl;
			cout << indexSearch << " was not found" << endl << endl;
		}
	}
	
	//primes the smallest number to the first number of the array
	smallestNum = numList[0];
	
	//loops for every number in the array (except for the last number)
	for (int i = 0; i < indexSize; i++){
		
		//searches through the array for the
		//smallest number and assigns it to smallestNum
		for (int count = posVar; count <= indexSize; count++){
			if(numList[count] < smallestNum){
				smallestNum = numList[count];
				smallNumPos = count;
			}
		}
		
		//sets the smallest number's position to the current index
		numList[smallNumPos] = numList[i];
		//sets the index's original number to the smallest number found
		numList[i] = smallestNum;
		//primes smallestNum for next loop
		smallestNum = numList[posVar];
		//increment index position to check
		posVar++;
	}
	
	iterations = 1;
	
	// check that the array is sorted
	for(int i = 1; i < arraySize; i++){
		if( numList[i] < numList[i-1]){
			cout << endl << numList[i] << " < " << numList[i-1] << endl << endl;
		}
	}
	
	
	
	do{
		midPoint = ((upperIndices-lowerIndices-1)/2)+lowerIndices;
		
		if(indexSearch == numList [midPoint-1]){
			// << indexSearch << " is located at index " << midPoint << endl << endl; 
			break;
		}
		
		else if(numList[midPoint-1] > indexSearch && numList[midPoint-2] < indexSearch ){
			iterations++;
			cout << "Binary search used " << iterations << " iterations" << endl;
			cout << indexSearch << " was not found" << endl;
			exit(0);
		}
		
		else if(numList[midPoint-1] < indexSearch){
			//cout << numList[midPoint-1] << " is less than " << indexSearch << endl;
			lowerIndices = midPoint;
		}
		
		else if(numList[midPoint-1] > indexSearch){
			//cout << numList[midPoint-1] << " is more than " << indexSearch << endl;
			upperIndices = midPoint;
		}
		
		iterations++;
		
		//cout << "midPoint: " << midPoint << "; value: " << numList[midPoint-1] << endl;
		
	}while(indexSearch != numList [midPoint-1]);
	
	cout << "Binary search used " << iterations << " iterations" << endl;
	cout << indexSearch << " is located at index " << midPoint-1 << endl;
	//cout << "midPoint: " << midPoint << "; value: " << numList[midPoint-1] << endl;
	
	////posts the organized array
	//cout << "All elements sorted in ascending order:" << endl;
	//for(int i = 0; i < indexSize; i++){
	//	cout << numList[i] << endl;
	//}
	cout << endl << numList[9999] << numList[0] << endl;
	
	return 0;
}
