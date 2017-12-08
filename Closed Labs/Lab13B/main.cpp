/*
 * 
 * Name: Peyton Cox
 * Date: 3/20/2017
 * Description: "Takes in numbers into an array(current set to 10000),
 * 				 allows you to search through the unsorted array by linear search, then sorts
 * 				 and posts the array in ascending order and searches by binary search."
 * 
 */

#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;

void LinearSearch(int indexSearch, int indexSize,int numList[]);

void BinarySearch(int indexSearch, int indexSize,int numList[], int midPoint, int lowerIndices, int upperIndices);


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
	int midPoint;
	
	int upperIndices = arraySize-1;
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
	
	
	LinearSearch(indexSearch, indexSize, numList);
	
	
	//loops for every number in the array (except for the last number)
	for (int i = 0; i < indexSize; i++){
		
		//primes the smallest number to the first number of the array
		smallestNum = numList[i];
		
		smallNumPos = i;
		
		//searches through the array for the
		//smallest number and assigns it to smallestNum
		for (int count = posVar; count < indexSize; count++){
			if(numList[count] < smallestNum){
				smallestNum = numList[count];
				smallNumPos = count;
			}
		}
		
		//sets the smallest number's position to the current index
		numList[smallNumPos] = numList[i];
		//sets the index's original number to the smallest number found
		numList[i] = smallestNum;
		//increment index position to check
		posVar++;
	}
	
	
	// check that the array is sorted
	for(int i = 1; i < arraySize; i++){
		if( numList[i] < numList[i-1]){
			cout << endl << numList[i] << " < " << numList[i-1] << endl << endl;
		}
	}
	
	BinarySearch(indexSearch, indexSize, numList, midPoint, lowerIndices, upperIndices);
	
	
	
	//cout << "midPoint: " << midPoint << "; value: " << numList[midPoint] << endl;
	
	////posts the organized array
	//cout << "All elements sorted in ascending order:" << endl;
	//for(int i = 0; i < indexSize; i++){
	//	cout << numList[i] << endl;
	//}
	//cout << endl << numList[9999] << numList[0] << endl;
	
	return 0;
}


void LinearSearch(int indexSearch, int indexSize,int numList[]){
	
	//searches and posts the index that the previous number was found at
	for(int iterations = 0; iterations < indexSize; iterations++){
		if(indexSearch == numList [iterations]){
			cout << "Linear search used " << (iterations+1) << " iterations" << endl;
			cout << indexSearch << " is located at index " << iterations << endl << endl; 
			break;
		}
		else if(iterations == indexSize-1){
			cout << "Linear search used " << (iterations+1) << " iterations" << endl;
			cout << indexSearch << " was not found" << endl << endl;
		}
	}
	
}


void BinarySearch(int indexSearch, int indexSize,int numList[], int midPoint, int lowerIndices, int upperIndices){
	
	int iterations = 1;
	
	do{
		midPoint = ((upperIndices-lowerIndices+1)/2)+lowerIndices;
		
		if(indexSearch == numList [midPoint]){
			// << indexSearch << " is located at index " << midPoint << endl << endl; 
			cout << "Binary search used " << iterations << " iterations" << endl;
			cout << indexSearch << " is located at index " << midPoint << endl;
			exit(0);
		}
		
		//else if(upperIndices+1 == lowerIndices-1 ){
		//	exit(0);
		//}
		
		else if(numList[midPoint] < indexSearch){
			//cout << numList[midPoint] << " is less than " << indexSearch << endl;
			lowerIndices = midPoint+1;
		}
		
		else{
			//cout << numList[midPoint] << " is more than " << indexSearch << endl;
			upperIndices = midPoint-1;
		}
		
		iterations++;
		
		//cout << "midPoint: " << midPoint << "; value: " << numList[midPoint] << endl;
		
	}while(upperIndices >= lowerIndices);
	
	cout << "Binary search used " << iterations << " iterations" << endl;
	cout << indexSearch << " was not found" << endl;
	
}
