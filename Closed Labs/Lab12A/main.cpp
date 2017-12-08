/*
  Author:      Hyrum Carroll
  Date:        March 13, 2017
  Description: Practice using classes
*/

#include <iostream>
#include "fraction.h"

using namespace std;

int main(){
    // Create a fraction object and set the data members to represent 22/7
    Fraction piEstimate1;
    piEstimate1.setNumerator( 22 );
    piEstimate1.setDenominator( 7 );

    // Display the fraction
    cout << piEstimate1.getNumerator() << "/" << piEstimate1.getDenominator() << " = " << double( piEstimate1.getNumerator() ) / piEstimate1.getDenominator() << endl;

    
    // Create a fraction object and set the data members to represent 355/113 using the constructor
    Fraction piEstimate2( 355, 113);
    
    // Display the fraction
	piEstimate2.display();
    
    return 0;
}