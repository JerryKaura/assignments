#include <iostream>
 using namespace std;

 class Fractions
 {
     int numerator, denominator;
     public:

     Fractions()
     {
         cout << "Input numerator";
         cin >> numerator;
         cout << "Input denominator";
         cin >> denominator;
     }

     void display()
     {
         cout << numerator<<"/"<< denominator;
     }
 };

int main(){
    Fractions y;
    y.display();
}