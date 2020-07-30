#include <iostream>
#include <string>

using namespace std;
class Fraction {
    public:
      // Fraction(int top=0, int bottom=1) {
      //    /** Fraction contructor method */
      //     num = top;     // setting num's value
      //     den = bottom;  // setting den's value
      //   }

			Fraction (int top){
				num = top;
				den = 1;
					}
			Fraction (){
					num = 0;
					den = 1;
					}	
			void show(){
            cout << num << "/" << den << endl;
        }	
     private:
       int num; // num atribute
       int den; // den attribute
};

int main() {
    // Fraction fraca(3, 5);
    Fraction fracb(3);
    Fraction fracc; //notice there are no parentheses here.
    // cout << fraca << endl; //uncomment to see error
    // fraca.show();
    fracb.show();
    fracc.show();

    return 0;
}