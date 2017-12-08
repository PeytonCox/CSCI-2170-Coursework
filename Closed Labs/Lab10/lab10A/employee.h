#include <string>
#include <iomanip>
#include <iostream>

using std::cout;
using std::endl;
using std::setw;
using std::string;


enum JobType{ admin, engineer, staff};

struct Job{
	string name;
	JobType jobPos;
	double salary;
};

string getJobStr( JobType jobPos){
    string jobStr = "";
    switch( jobPos){
    case admin: jobStr = "admin"; break;
    case engineer: jobStr = "engineer"; break;
    case staff: jobStr = "staff"; break;
    }

    return jobStr;
}
