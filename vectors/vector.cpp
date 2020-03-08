#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;
class Vector
{
    float d[50];
    int s;

    public:
    void newVector();
    void modifyVector();
    void scalarMultiply();
    void displayVector();
};

void Vector::newVector(void)
{
    cout<<"\nEnter the size of vector to create:";
    cin>>s;
    cout<<"Enter "<<s<<" real numbers\n";
    for(int i = 0; i < s; i++){
        cout<<"Number "<<i+1<<":";
        cin>>d[i];
    }
    cout<<"Vector created successfully! \n\n";
}

void Vector::modifyVector(void)
{
   int modValue;
   float with;
   cout<<"\nEnter value to modify:"<<endl;
   cin>>modValue;
   cout<<"Enter value to replace:";
   cin>>with;
   int search = 0;
   for(int i= 0 ; search<s;i++){
       if(modValue==d[i]){
           d[i]=with;
           cout<<"Modifcation successful.";
       }else{
           cout<<"\nNo such value in the vector\n";
           break;
       }
       search +=1;
   }
}

void Vector::scalarMultiply()
{
    int scalar;
    cout<<"\n Enter the scalar value:";
    cin>>scalar;
    for(int i = 0; i<s; i++){
        d[i]=d[i]*scalar;
    }
    cout<<"\n Mulitplication success ,enter option 4 to see the new vector";
}
  

void Vector::displayVector()
{
    cout<<"\n The vector is : ";
    cout<<"(";
    for(int i=0 ; i<s; i++){      
        cout<<d[i]; 
        if(i!=s-1){
            cout<<" , "; 
        }
    }
    cout<<")\n";
}

int main()
{
    // system("cls");
    Vector vector1;
    int choice;
        while(1)
        {
            cout<<"Choice list\n";
            cout<<" 1. New Vector \n 2. Modification \n 3. Scalar multiply \n 4. Display vector \n 5. Exit";
            cout<<"\n Enter your choice:";
            cin>>choice;
            switch(choice){
                case 1:
                vector1.newVector();
                    break;
                case 2:
                vector1.modifyVector();
                    break;
                case 3:
                vector1.scalarMultiply();
                    break;
                case 4:
                vector1.displayVector();
                    break;
                case 5:
                    exit(0);
            }
        }
}
