#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;


class Student
{
    protected:
        string name;
        int age,idNumber;
    public:
        // Student();
        void getInfo();
        void showInfo();

};

void Student::getInfo(){
    cout<<"Fill in Student information."<<endl;
    cout<<"Name :";cin>>name;
    cout<<"Age :";cin>>age;
    cout<<"ID Number :";cin>>idNumber;
}

void Student::showInfo()
{
    cout<<"\n\n-----------Student Info----------\n";
    cout<<"Name     :"<<name<<endl;
    cout<<"Age      :"<<age<<endl;
    cout<<"ID Number:"<<idNumber<<endl;

}


class Result:public Student
{
    private:
    string units[7]= {"CSC221", "CSC222", "CSC223","CSC224", "CSC225", "CSC226","CSC227"},grade;
    int unitResults[7],totalScore;
    float gradeScore;
        string course;
        int marks;
        float percentage;
        char overalGrade;
    public:

        // Result();
        void getResult();
        void displayResults();
        void displayConsolidatedReport();
};

void Result::getResult(){
    totalScore = 0;
    for( int i= 0; i< 7 ; i++){
        cout<<"Enter resul for " <<units[i]<<" :";
        cin>>unitResults[i];
        totalScore +=unitResults[i];
        gradeScore = (totalScore/7);
        if(gradeScore>=70)
        grade='A';
        else if(gradeScore>=60)
        grade='B';
        else if(gradeScore>=50)
        grade='C';
        else if(gradeScore>=40)
        grade='D';
        else
        grade='F';
    }
}
void Result::displayResults(){
    cout<<setw(5)<<"\n\nUNIT"<<setw(17)<<"SCORE"<<setw(15)<<"GRADE"<<endl;
    cout<<"-------------------------------------"<<endl;

    for(int i =0 ; i< 7 ;i++){
        cout<<setw(5)<<units[i]<<setw(15)<<unitResults[i]<<setw(15)<<grade<<endl;
        if(unitResults[i]>=70)
        grade='A';
        else if(unitResults[i]>=60)
        grade='B';
        else if(unitResults[i]>=50)
        grade='C';
        else if(unitResults[i]>=40)
        grade='D';
        else
        grade='F';
    }
    cout<<"-------------------------------------"<<endl;
    cout<<setw(2)<<"TOTAL SCORE"<<setw(10)<<totalScore<<setw(15)<<grade;
    cout<<"\n-------------------------------------"<<endl;
}
void Result::displayConsolidatedReport(){
    cout<<setw(5)<<name<<setw(15)<<age<<setw(15)<<totalScore<<setw(15)<<grade<<endl;

}
int main()
{
    Student s[100];
    Result r[100];
    for(int i = 0 ; i< 2; i++){
        r[i].getInfo();
        r[i].getResult();
        r[i].displayResults();
    }
    cout<<setw(5)<<"NAME"<<setw(15)<<"AGE"<<setw(15)<<"SCORE"<<setw(15)<<"GRADE"<<endl;
    cout<<"-------------------------------------"<<endl;
    for(int i=0; i<2 ;i++){
        r[i].displayConsolidatedReport();
    }


}
