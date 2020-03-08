#include <iostream>
using namespace std;

class Section {
    private:
        int sectionNo;
        int reqSeatNo;
        int roomNo;
        int assigned;
    public:
        Section () { assigned = 0; }
        void create (int, int);
        void printInfo ();
        friend class Room;

};

void Section::create (int secLimit, int secNo) {
    reqSeatNo = secNo;
    sectionNo = secLimit;
}

void Section::printInfo () {
    cout << endl;
    cout << "---------------Section Details--------------------" << endl;
    cout << "Section No.: " << sectionNo << endl;
    cout << "Required Seats: " << reqSeatNo << endl;
    cout << "Room No.: " << roomNo << endl;
    cout << "Assigned: " << assigned << endl;
    cout << "--------------------------------------------------" << endl;
    cout << endl;

}

class Room {
    private:
        int roomId;
        int seatsNo;
        int taken;
    public:
        Room () { taken = 0; }
        void create (int, int);
        void printInfo ();
        void assignSection (Section &);

};

void Room::assignSection (Section &sect) {
    if (taken == 0 && seatsNo >= sect.reqSeatNo && sect.assigned == 0) {
        sect.roomNo = roomId;
        sect.assigned = 1;
        taken = 1;
        cout << "Room assigned successfully!" << endl;
    } else {
        cout << "The room is already taken or is too small. Please try another one!" << endl;
    }
}

void Room::create (int rm_seats, int rm_num) {
    seatsNo = rm_seats;
    roomId = rm_num;
}

void Room::printInfo () {
    cout << endl;
    cout << "-----------------Room Details---------------------" << endl;
    cout << "Room ID: " << roomId << endl;
    cout << "No. of Seats: " << seatsNo << endl;
    cout << "Occupied: " << taken << endl;
    cout << "--------------------------------------------------" << endl;
    cout << endl;
}

int main () {
    int secNo,secLimit, i=1, j=1, rm_num, rm_seats;
    Section s[100];
    Room r[100];
    cout<<"Enter secton number:"<<endl;
    cin>>secNo;
    cout<<"\n Enter section limit:";cin>>secLimit;
    s[i].create(secNo,secLimit);
    i+=1;


    cout<<"\n Enter seat number:";cin>>rm_seats;
    cout<<"\n Enter room number:";cin>>rm_num;
    r[i].create(rm_seats,rm_num);
    r[j].assignSection(s[i]);


    r[j].printInfo();
    s[i].printInfo();

    // r[j].assignSection(s[i]);

}
