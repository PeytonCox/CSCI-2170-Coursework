// Header file fraction.h declares class Fraction

#ifndef FRACTION_H
#define FRACTION_H

// Class Fraction represents the numerator and
// denominator of a fraction.
class Fraction{
  
public:
    /*
      Constructors
    */
    
    //Numerator and denominator have been set to zero
    Fraction( );
    
    //Numerator has been set to initNumerator;
    //Denominator has been set to initDenominator. 
    Fraction( int initNumerator, int initDenominator );
    
    //Numerator of frac1 is returned.
    int getNumerator( ) const;
    
    //Denominator of frac1 is returned.
    int getDenominator( ) const;
	
	//Numerator has been set to numeratorIn
	void setNumerator( int numeratorIn );
	
	//Denominator has been set to DenominatorIn
	void setDenominator( int denominatorIn );
	
	//Displays the results of numerator divided by denominator 
	void display( );
  
private:
    int numerator;
    int denominator;
};


#endif