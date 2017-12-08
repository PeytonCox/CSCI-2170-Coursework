#include <iostream>
#include "Student.h"

using namespace std;


int main()
{
	
	Student firstStudent;
	Student secondStudent("Holley", 2);
	
	firstStudent.setter("Cox", 1);
	
	if(firstStudent.isEqual(secondStudent)){
		cout << "These two students are the same!" << endl;
	}
	
	else{
		cout << "These two students are not the same!" << endl;
	}
	
	
	return 0;
}
