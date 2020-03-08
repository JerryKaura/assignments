#include <iostream>

using namespace std;
int main()
{
    float netTax, grossTax, taxable;
    cout<<"Enter yout taxable income:";
    cin>>taxable;
    if(taxable > 0 and taxable <12298){
        grossTax = 0.1*taxable;
    }else if(taxable > 12298 and taxable <= 23885){
        grossTax = 0.15*taxable;
    }else if (taxable > 23885 and taxable <= 34572){
        grossTax = 0.2*taxable;
    }else if(taxable > 34572 ){
        grossTax = 0.25*taxable;
    }
    cout<<"Gross tax is : "<<grossTax<<endl;
    netTax = taxable - grossTax;
    cout<<"Your net pay is :"<<netTax;

}
