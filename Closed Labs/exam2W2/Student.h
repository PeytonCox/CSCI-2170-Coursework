#ifndef STUDENT
#define STUDENT

#include <string>

class Student{

public:

	Student();
	
	Student(std::string, int);
	
	void setter(std::string, int);
	
	void getter();
	
	bool isEqual(Student);


private:
	
	std::string lastName;
	int id;


};

#endif
