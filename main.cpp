
#include "fraction.h"
// using namespace std;

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
