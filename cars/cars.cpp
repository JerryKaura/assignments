#include <iostream>
#include <string>
using namespace std;



class Cars
{
    // member variabes
    private:
    string company_name;
    string model;
    float millage;
    string fuel_type;
    double buy_price;

    // member functions
    public:
    void setData(string cname, string mname, float mile, string fuel, double price)
    {
        company_name=cname;
        model = mname;
        millage = mile;
        fuel_type = fuel;
        buy_price= price;
    }

    void display()
    {
        cout << "Car properties" <<endl;
        cout << "Car name"<<"    :"<<company_name<<endl;
        cout << "model"<< "       :"<<model<<endl;
        cout << "Millage"<<"     :"<<millage<<endl;
        cout << "fuelType"<<"    :"<<fuel_type<<endl;
        cout << "price"<<"       :"<<buy_price<<endl;

    }
};
int main()
{
    Cars car[20];
    car[0].setData("Benz","C225", 34343.53, "Petrol", 3535);
    car[0].display();
}
