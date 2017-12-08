// Implementation file fraction.cpp implements the member 
// functions of class Fraction.

#include "fraction.h"
#include <iostream>
 
Fraction::Fraction( ){
	//blank Fraction template
}

Fraction::Fraction( int initNumerator, int initDenominator ){
	numerator = initNumerator;
	denominator = initDenominator;
}

//gets the numerator
int Fraction::getNumerator( ) const {
	return numerator;
}  

//gets the denominator
int Fraction::getDenominator( ) const {
    return denominator;
}

//sets the numerator
void Fraction::setNumerator( int numeratorIn ){
	numerator = numeratorIn;
}

//sets the denominator
void Fraction::setDenominator( int denominatorIn ){
	denominator = denominatorIn;
}

//Calculates and displays the results of the numerator divided by the denominator
void Fraction::display( ){
	std::cout << numerator << "/" << denominator << " (" << double( numerator ) / denominator << ")" << std::endl;
}



