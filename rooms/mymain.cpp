#include <iostream>
#include <string.h>

using namespace std;

class Room;

class Section {
private:
    int sectionNumber;
    int enrollLimit;    
    int roomNumber;
public:
    Section(int sectionNo, int enroll, int roomNo);
    bool assignRoom();
    void newSection();
    int setRoom(int x);
    void display();
    void assignRoom2Section(Room &);
};

void Section::assignRoom2Section (Room &rm) {
    if (rm.isOccupied() && rm.hasEnoughSeats()) {
        roomNumber = rm.roomNumber;
    }
}


class Room{
private:
    int roomNumber;
    bool roomOccupied;
    int roomLimit;
public:
    Room(int number, bool occupied, int seatLimit);
    bool isOccupied();
    void newRoom();
    bool hasEnoughSeats();
    bool roomStatus();
    void showRoom();
    int getRoomNumber();
    void changeStatus();
    friend class Section;
};

Room::Room(int number=1, bool occupied= false, int seatLimit=40) {
    roomNumber= number;
    roomOccupied = occupied;
    roomLimit= seatLimit;
}
void Room::newRoom() {
    int seats;
    char temp;
    cout<< "Enter the room number: ";
    cin>>roomNumber;
    cout << "Enter the number of seats in the room: ";
    cin >> seats;
    cout<<"Is the room occupied (y/n): ";
    cin>>temp;
    if(temp=='y'){
        roomOccupied= true;
    } else{
        roomOccupied= false;
    }
    roomLimit = seats;
}

bool Room::isOccupied(){
    return this->roomOccupied;
}

bool Room::hasEnoughSeats(){
    return(roomLimit>=40);
}

bool Room::roomStatus(){
   return(hasEnoughSeats() && isOccupied());
}

void Room::showRoom(){
    cout << "Room number:"<<roomNumber<<endl;
    if(!roomOccupied)
    {
        cout<<"The room is unoccupied"<<endl;
        if (hasEnoughSeats())
            {
                cout<<"The room has enough seats"<<endl;
            }
         else{
                cout <<"The room does not have enough seats"<<endl;
            }
    }
     else{
        cout<<"The room is occupied"<<endl;
    }
}

int Room::getRoomNumber(){
    return roomNumber;
}

void Room::changeStatus(){
    if(roomOccupied ){
        roomOccupied=false;
    }else{
        roomOccupied=true;
    }
}

Section::Section(int scNo=0, int limit=70, int rmNo=0) {
    roomNumber = rmNo;
    enrollLimit = limit;
    sectionNumber = scNo;
}
bool Section::assignRoom() {
    return roomNumber >= 1;
}
void Section::newSection() {
    cout << "Enter the section number: ";
    cin>>sectionNumber;
}
int Section::setRoom(int x) {
    roomNumber = x;
}
void Section::display() {
    cout<<"Section number: "<<sectionNumber<<endl;
    cout <<"Section has a limit of "<<enrollLimit<<" students"<<endl;
    if(!assignRoom()){
        cout<<"The section is not assigned to a room!"<<endl;
    } else{
        cout<<"Section is assigned to room number: "<<roomNumber<<endl;
    }
}

int main() {
    Section s[100];
    Room r[100];
    int i,choice,sec_top=0,sec_num,rm_top=0,rm_num,x;
    while (1)
    {
        cout<<"Enter choice:";
        cin>>choice;
        switch (choice)
        {
            case 1:
                cout<<"How many rooms do you want to create:";
                cin>>rm_num;
                for(i=rm_top; i<rm_num+rm_top; i++){
                    r[i].newRoom();
                }
                rm_top +=rm_num;
                break;

            case 2:
                for(i=0; i<rm_top;i++){
                    cout<<"\n";
                    r[i].showRoom();
                }
                break;

            case 3:
                cout<<"How many Sections do you want to create:";
                cin>>sec_num;
                for(i=sec_top; i<sec_num+rm_top; i++){
                    s[i].newSection();
                }
                sec_top +=sec_num;
                break;

            case 4:
                for(i=0 ; i<sec_top ; i++){
                    cout<<"\n";
                    s[i].display();
                }
                break;
            case 5:
                cout<<"\n Enter section number to assign room:";                
                break;    
            case 6:
                exit(0);
                break;
            default:
                cout<<"\nInvalid Choice Entered";
                break;
        }

    }


    // Room a(10,0,30);
    // a.getValues();
    // b.newSection();
    // a.showRoom();
    // if(a.roomStatus()){
    //     b.setRoom(a.getRoomNumber());
    //     a.changeStatus();
    // }
    // a.showRoom();
    // b.display();

    return 0;
}
