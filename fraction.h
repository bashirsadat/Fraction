#include <string>
#include <iostream>
using namespace std;
class Fraction{
 private:
 int numerator;
 string slash="/";
 int denominator;
 public:
	 Fraction();
	 Fraction(int numerator, int  denominator);
	//getters
	int getnumerator();
	string getslash();
	int getdenominator();
	string toString();
	//setters
	void setnumerator(int numerator);
	void setslash(string slash);
	void setdenominator(int  denominator);
	Fraction reduce(int numerator, int  denominator);
	

};
