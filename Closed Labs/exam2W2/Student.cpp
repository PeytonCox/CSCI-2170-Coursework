#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(){
	
	id = -1;
	
};

Student::Student(string studentName, int studentId){
	
	lastName = studentName;
	id = studentId;
	
}

void Student::setter(string studentName, int studentId){
	
	lastName = studentName;
	id = studentId;
	
}

void Student::getter(){
	
	cout << "Student name: " << lastName << ", Student ID: " << id;
	
}

bool Student::isEqual(Student otherStudent){
	
	if(lastName == otherStudent.lastName && id == otherStudent.id){ 
		return true; 
		}
	
	else{ return false; }
	
}
