// Example of overloaded operator functions
// Original authors: Brenda Parker & Hyrum Carroll
// Extended by: 
#include <iostream>
using namespace std;

/* Class to represent a fraction (with it's numerator and denominator stored
 * separately) and corresponding operations on a fraction (e.g., adding another
 * fraction to this one, etc.).
 */
class Fraction{
	
public:
	
	//constructor
	Fraction(){
		//set numerator and denominator to dummy values
		num = -1;
		den = -1;
		
	};
	
	//parameterized constructor
	Fraction(int numerator, int denominator){
		
		num = numerator;
		den = denominator;
		
	};
	
	//OVERLOADED MATH OPERATORS (+, -, ++var, var++)//
	//Overloaded "+" Operator
	Fraction operator+( const Fraction& rhs ) const {
		int newNum = (num*rhs.den) + (rhs.num*den);
		int newDen = den*rhs.den;
		return Fraction( newNum, newDen );
	}
	
	//Overloaded "-" Operator
	Fraction operator-( const Fraction& rhs ) const {
		int newNum = (num*rhs.den) - (rhs.num*den);
		int newDen = den*rhs.den;
		return Fraction( newNum, newDen );
	}
	
	//Overloaded "++" Prefix
	Fraction operator++() {
		this->num = this->num+this->den;
		return *this;
	}
	
	//Overloaded "++" Postfix
	Fraction operator++(int) {
		Fraction temp(*this);
		this->num = this->num+this->den;
		return temp;
	}
	
	//OVERLOADED BOOL OPERATORS (<, >, ==)//
	//Overloaded ">" Operator
	bool operator>(const Fraction& rhs) const {
		
		return ((num*rhs.den) > (rhs.num*den));
		
	}
	
	//Overloaded "<" Operator
	bool operator<(const Fraction& rhs) const {
		
		return ((num*rhs.den) < (rhs.num*den));
		
	}
	
	//Overloaded "==" Operator
	bool operator==(const Fraction& rhs) const {
		
		return ((num*rhs.den) == (rhs.num*den));
		
	}
	
	//OVERLOADED "<<" AND ">>" OPERATORS//
	//Overloaded "<<" Operator
	friend ostream& operator<<( ostream& os, const Fraction& rhs);
	//Overloaded ">>" Operator
	friend istream& operator>>( istream& is, Fraction& rhs);
	
private:
	
	//fraction numerator
	int num;
	//fraction denominator
	int den;
	
    
};


ostream& operator<<( ostream& os, const Fraction& rhs){
    os << rhs.num <<"/" << rhs.den;
    return os;
}

istream& operator>>( istream& is, Fraction& rhs){
	cout << "Enter a numerator";
    is >> rhs.num;
	cout << "Enter a denominator";
	is >> rhs.den;
    return is;
}

int main(){
    Fraction aFraction(2,3);
    Fraction bFraction(3,8);
    Fraction cFraction;

    cout << "aFraction: " << aFraction << endl;
    cout << "bFraction: " << bFraction << endl;
    
    cFraction = aFraction + bFraction;
    cout << aFraction << " + " << bFraction << " = " << cFraction << endl;
    
    cFraction = bFraction - aFraction;
    cout << bFraction << " - " << aFraction << " = " << cFraction << endl;
    
    cout << "++(" << aFraction << ") = ";
    cFraction = ++aFraction;
    cout << cFraction << endl;
    
    cout << "(" << bFraction << ")++ = ";
    cFraction = bFraction++;
    cout << cFraction << endl;
    
    cin >> aFraction;
    cout << "You entered: " << aFraction << endl;
    
    cin >> bFraction;
    cout << "You entered: " << bFraction << endl;
    
    if( aFraction == bFraction){
        cout <<"The fractions are equal\n";
    }else{
        if( aFraction > bFraction){
            cout << aFraction << " is larger than " << bFraction << endl;
        }else if( aFraction < bFraction){
            cout << aFraction << " is smaller than " << bFraction << endl;
        }else{
            cout << "ERROR: " << aFraction << " is not ==, > nor < than " << bFraction << endl;
        }
    }
    return 0;
}
