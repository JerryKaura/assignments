#include <iostream>
#include <string.h>

using namespace std;

class Room;

class Section
{
    private:
        int sectionNumber;
        int roomNumber;
        int enrollLimit;
        int assigned;
    public:
        Section () { assigned = 0; }
        void newSection(int, int);
        bool isAssigned();
        friend class Room;
        

};

void Section::newSection(int sect_id, int sect_limit){
    sectionNumber = sect_id;
    enrollLimit = sect_limit;
}

class Room
{
    private:
        int roomNumber;
        int roomLimit;
        int taken;
    public:
        Room(){taken =0;}
        void newRoom(int, int);
        void assignSection(Section &);
};

void Room::assignSection(Section &sect){
    if(taken == 0 && sect.assigned ==0 && roomLimit >= sect.enrollLimit ){
        sect.roomNumber = roomNumber;
        taken, sect.assigned =1;
        cout<<"\nRoom assigned successfully!"<<endl;
    }else{
        cout<<"Room already taken or too small!"<<endl;
    }
}

void Room::newRoom(int rm_number, int rm_limit){
    roomNumber = rm_number;
    roomLimit = rm_limit;
}

int main(){
    Section s;
    Room r;
    s.newSection(10001,50);
    r.newRoom(1,3);

    r.assignSection(s);
}
