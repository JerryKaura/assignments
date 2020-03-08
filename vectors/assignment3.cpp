#include <iostream>

using namespace std;

class Vector
{
public:
    float value1;
    float value2;

    vector()
    {
        value1 = 0;
        value2 = 0;
    }
    void createVector(){
        cout << "Enter value one of the vector:";
        cin >>value1;
        cout << "Enter value 2 of the vector:";
        cin >> value2;
        cout << "Vector is "<< "("<< value1 << ","<< value2 <<")"<<endl;;
    }

    void changeValue(){
        int val1, val2;
        cout << "Insert the new value 1:";
        cin >> val1;
        cout << "Insert the new value 2:";
        cin >> val2;
        value1 = val1;
        value2 = val2;
        cout << "New vector is "<< "("<< value1 << ","<< value2 <<")"<<endl;
    }

    void scalarMultiply(){
        int scalar;
        cout << "Enter the scalar multiplier:";
        cin >>scalar;
        value1 = scalar*value1;
        value2 = scalar*value2;
        cout << "New vector is "<< "("<< value1 << ","<< value2 <<")"<<endl;
    }
    void display(){
        cout << "New vector is "<< "("<< value1 << ","<< value2 <<")"<<endl;
    }
};

int main(){
    int choice;
    Vector newr;
    for(int i=0 ; i<4 ; i++)
    {
        cout << "Enter an option to execute"<<endl;
        cout << "1. create new vector"<<endl <<"2.Modify a vector"<<endl <<"3. Multiply by scalar"<<endl <<"4. Display"<<endl;
        cin >>choice;

        if(choice ==1)
        {
            newr.createVector();
        }else if(choice ==2)
        {
            newr.changeValue();
        }else if(choice ==3)
        {
            newr.scalarMultiply();
        }else
        {
            newr.display();
        }
    }
}
