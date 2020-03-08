#include <iostream>

using namespace std;

class Bankaccount
{
public:

    string depositer;
    int account_number;
    string account_type;
    float balance;


    Bankaccount()
    {
        depositer = "Jerry";
        account_number = 2020;
        account_type = "Ordinary";
        balance = 0;
    }

    void deposit(){
        int amount;
        cout << "Enter amount to deposit:";
        cin >> amount;
        balance = balance+amount;
        cout << "Your balance is :"<<balance <<endl;
    }
     void withdraw()
     {
        int amount;
        cout << "Enter amount to withdraw:";
        cin >>amount;
        if(amount>balance){
            cout << "Amount enetered is higher than available balance!!";
        }else{
            balance = balance - amount;
            cout << "Your new balance is :" <<balance <<endl;
        }

     }

    int checkBalance()
    {
        cout << balance;
        return balance;
    }

    void setDetails()
    {

        cout << "Enter customer name:";
        cin >> depositer;
        cout << "Enter account  number:";
        cin >> account_number;
        cout << "Enter account type:"<<endl;
        cin >> account_type;
        cout << depositer <<" ";
        cout << account_number << "  ";
        cout << account_type <<"  ";
    }
};

int main(){
    int choice;
    Bankaccount customer;
    cout << "Enter an option to execute"<<endl;
    cout << "1. Deposit"<<endl <<"2.Withdraw"<<endl <<"3. Check balance"<<endl <<"4. New Customer"<<endl;
    cin >>choice;

    if(choice ==1){
        customer.deposit();
    }else if(choice ==2){
        customer.withdraw();
    }else if(choice ==3){
        customer.checkBalance();
    }else{
        customer.setDetails();
    }
}
