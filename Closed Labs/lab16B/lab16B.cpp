#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

// Put templated Calculator class here


template<typename T, typename S>
class Calculator{
public:
	
	Calculator(){
		firstVal = 0, secondVal = 0;
	}
	
	Calculator(T val1, S val2){
		
		firstVal = val1;
		secondVal = val2;
		
	};
	
	void setValue1(T val1){ firstVal = val1; };
	void setValue2(S val2){ secondVal = val2; };
	T add(){ return firstVal+secondVal; };
	T multiply(){ return firstVal*secondVal; };
	
	
private:
	
	T firstVal;
	S secondVal;
	
};



// End of templated Calculator class

int main(){
    Calculator<int,int> simpleCalc(42, 3);
    cout << "Adding: " << simpleCalc.add() << endl;
    cout << "Multiplying: " << simpleCalc.multiply() << endl;
    simpleCalc.setValue1( 7);
    cout << endl;
    
    Calculator<int,int> copyCalc( simpleCalc);
    cout << "Adding: " << simpleCalc.add() << endl;
    cout << "Multiplying: " << simpleCalc.multiply() << endl;
    cout << endl;
    
    Calculator<float,double> realCalc(1.41421, 2.718281828459045);
    cout << "Adding: " << realCalc.add() << endl;
    cout << "Multiplying: " << realCalc.multiply() << endl;
    cout << endl;
    return 0;
}
