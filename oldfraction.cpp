#include <fraction.h>
#include <iostream>
using namespace std;
class Fraction{
 private:
 int numerator;
 string slash = "/";
 int denominator;
 public:
	 Fraction(){
		 numerator = 0;
		 denominator= 1;


	 }
	 Fraction(int numerator, int  denominator){ // constructor
		this->numerator = numerator; 
		this->denominator = denominator;
	}
	//getters
	int getnumerator() { return numerator; }
	string getslash() { return slash; }
	int getdenominator() { return denominator; }
	string toString(){
	string out;
	out = to_string(numerator) +  slash + to_string(denominator) + "\n";
	return out;
	}
	//setters
	void setnumerator(int numerator){ this->numerator = numerator; }
	void setslash(string slash) { this->slash = slash; }
	void setdenominator(int  denominator) { this->denominator = denominator; }
};

int main(){
	int a;
	int b;

 // create objects s1 and s2
 Fraction s1(1,  3);
 Fraction s2(5, 3);
 cout << s1.toString() << s2.toString() << endl;
 Fraction f3;
 cout << "Enter a fraction operation of the form: f1 operation f2 f1, f2 in the form 2/3 for example operation:"<<endl;
 cin >>a;
 cin >>b;
 f3.setnumerator(a);
 f3.setdenominator(b);
 cout << f3.toString()<<endl;
}