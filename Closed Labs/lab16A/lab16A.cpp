#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;



template<typename T, typename S>
T add(T firstVal, S secondVal){
	
	return firstVal+secondVal;;
	
}



int main(){
    int answer = 42;
    float pi = 3.14159;
    string str1("Yeah, my templated function ");
    string str2("works!");

    cout << add<int,float>( answer, pi) << endl;
    
    cout << add<string,string>( str1, str2) << endl;
    
    return 0;
}
