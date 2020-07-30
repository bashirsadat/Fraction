#include "fraction.h"
#include <iostream>

	 Fraction::Fraction(){
		 numerator = 0;
		 denominator= 1;
	 }
	 Fraction::Fraction(int numerator, int  denominator){ // constructor
		this->numerator = numerator; 
		this->denominator = denominator;
	}
	//getters
	int Fraction::getnumerator() { return numerator; }
	string Fraction::getslash() { return slash; }
	int Fraction::getdenominator() { return denominator; }
	string Fraction::toString(){
	string out;
	out = to_string(numerator) +  slash + to_string(denominator) + "\n";
	return out;
	}
	//setters
	void Fraction::setnumerator(int numerator){ this->numerator = numerator; }
	void Fraction::setslash(string slash) { this->slash = slash; }
	void Fraction::setdenominator(int  denominator) { this->denominator = denominator; }
	


