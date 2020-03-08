#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class Book
{
    private:
        double price;
        string author, title, publisher;
        int stock;
    public:
        book();
        void insertData();
        void showBooks();
        bool search(string t);
        void numBooks(int number);
};
Book::book(){
    price=0;
    stock=0;
}

void Book::insertData()
{
    cout<<"\n Book Name:";cin>>title;
    cout<<"\n Author Name:";cin>>author;
    cout<<"\n Publisher:";cin>>publisher;
    cout<<"\n Price:";cin>>price;
    cout<<"\n Stock remaining:";cin>>stock;
 }


void Book::showBooks()
{
    cout<<"\n "<<title<<"\t\t"<<author<<"\t\t"<<publisher<<" \t\t"<<price<<"\t\t "<<stock;
}


void Book::numBooks(int number)
{

    if(number<=stock)
    {
        stock=stock-number;
        cout<<"\n Books Bought Successfully Amount: Ksh. "<<(price)*number;
    }else{
        cout<<"\nRequired Copies not in Stock";
    }
}

bool Book::search(string t)
{
    if (title == t) return true;
    return false;
}

 int main(){
    int choice,number,i,copies,key=0,flag, top = 0;
        Book b[100];
        string bookName, bookTitle, bookAuthor;
    while(1)
    {
        cout<<"\n\n 1. Insert new Book.\n 2.Show available books \n 3. Search Books \n 4 Exit.";
        cout<<"\n Enter your choice:";
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"\n How many books do you want to Insert:";
                cin>>number;
                for(i=top; i<number+top; i++){
                    b[i].insertData();
                }
                top += number;
                break;
            case 2:
               cout<<"\n"<<"TITLE"<<"\t \t "<<"AUTHOR"<<"\t\t"<<"PUBLISHER"<<"\t\t"<<"PRICE"<<"\t\t"<<"STOCK";
                for(i=0; i<top;i++){
                    cout<<"\n";
                    b[i].showBooks();
                }
                break;
            case 3:
                cout<<"\n Enter title of required book:";cin>>bookTitle;
                flag = 0;
                for(i=0 ; i<top; i++)
                {
                    if(b[i].search(bookTitle)){
                        flag=1;
                        key=i;
                    }
                }
                if(flag==1){
                    cout<<"\n Books Available";

                }else{
                    cout<<"\n Book not available";
                    break;
                }
                if(flag==1){
                    cout<<"\n Enter the number of required books:";cin>>copies;
                    b[key].numBooks(copies);
                }
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"\nInvalid Choice Entered";
                break;
        }
    }
}
