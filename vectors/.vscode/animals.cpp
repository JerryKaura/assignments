#include <iostream>

using namespace std;

class Animal
{
    private:
    int number_of_legs=4, number_of_teeth,offspring, gestation;

    public:
    void getData(int number_of_legs,int number_of_teeth, int offspring, int gestation);
    void showData();
};

void Animal::getData(int legs,int teeth, int offspring, int gestation)
{
    number_of_legs = legs;
    number_of_teeth = teeth;
    Animal::offspring = offspring;
    Animal::gestation = gestation;

}

void Animal::showData()
{
    cout << "  " << number_of_legs<< "      "<< number_of_teeth<< "       "<< offspring << "        "<< gestation<<endl;
}

int main()
{
    Animal cattle[3];
    int number_of_legs=4, number_of_teeth, offspring, gestation;
    for (int i = 0; i < 3; i++) {
    cout << "Number of teeth:";
    cin >>number_of_teeth;
    cout << "Offsprings:";
    cin >> offspring;
    cout << "gestation:"<<endl;
    cin >>gestation;
        cattle[i].getData(number_of_legs, number_of_teeth, offspring, gestation);
    }

    cout << "Legs" << "  " << "Teeth"<< "   " << "offspring"<< "   " <<"Gestation"<<endl;
    cout << "____" << "  " <<"_______"<< "   "<< "________"<< "   "<< "________"<<endl;

    for (int i = 0; i < 3; i++) {
        cattle[i].showData();
    }
}
