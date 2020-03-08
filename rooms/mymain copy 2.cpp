#include <iostream>
#include <string.h>

using namespace std;

class Room;

class Section
{
    private:
        int sectionNumber;
        string sectionName;
        int roomNumber;
        int enrollLimit;
        int assigned;
    public:
        Section () { assigned = 0; roomNumber= 0; }
        void newSection(int, int,string);
        int isAssigned() { return assigned; };
        void showSection(){
            cout<<"Section No: "<<sectionNumber<<endl;
            cout<<"Section name: "<<sectionName<<endl;
            cout<<"Enroll Limit: "<<enrollLimit<<endl;
            if (roomNumber == 0) {
                cout << "No Room" << endl;
            } else {
                cout << "Room No.: " << roomNumber << endl;
            }
            cout<<"\n";

        };
        friend class Room;


};

void Section::newSection(int sect_id, int sect_limit, string sec_name){
    sectionNumber = sect_id;
    enrollLimit = sect_limit;
    sectionName = sec_name;

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
        bool isOccupied(){return taken;};
        void assignSection(Section &);
        void showInfo();

};

void Room::showInfo(){
    cout<<"Room Number: "<<roomNumber<<endl;
    cout<<"Room Capacity: "<<roomLimit<<endl;
    cout<<"Room status: ";
    if(taken){
        cout<<"Room Taken"<<endl;
    }else{
        cout<<"free"<<endl;
    }
    cout<<"\n";
}

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

void isAssigned(Section &sect) {
    if (sect.isAssigned() == 1) {
        cout << "\n Assigned"<<endl;
    }else{
        cout<<"\n Not assigned"<<endl;
    }
}


void showSection(Section sect){
    sect.showSection();
}
int main(){
    Section s[100];
    Room r[100];
    int choice, i,rm_number=1, sect_id=1, sect_limit,rm_limit;
    string sec_name;
    while (1)
    {
        cout<<"\n1. New section. \n2. New room. \n3. Assign Section \n4. Exit";
        cout<<"\nEnter choice to execute:";cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter section name: ";cin>>sec_name;
            cout<<"Enter section enroll Limit: ";cin>>sect_limit;
            s[sect_id].newSection(sect_id, sect_limit, sec_name);
            sect_id +=1;
            cout<<"--------------section Info------------"<<endl;
            for(i=1; i<sect_id; i++){showSection(s[i]);}
            break;
        case 2:
            cout<<"Enter room capacity:";cin>>rm_limit;
            r[rm_number].newRoom(rm_number,rm_limit);
            rm_number+=1;
            cout<<"----------------Room Info -----------------"<<endl;
            for(i=1; i<rm_number; i++ ){r[i].showInfo();}
            cout<<"----------------Room Info -----------------"<<endl;
            break;
        case 3:
            cout<<"Enter room id to assign:";cin>>rm_number;
            cout<<"Enter section id:";cin>>sect_id;
            r[rm_number].assignSection(s[sect_id]);
            break;
        case 4:
            exit(0);
        default:
            break;
        }
    }

    // s.newSection(10001,50);
    // r.newRoom(1,100);
    // r.showInfo();
    // r.isOccupied();
    // r.assignSection(s);
    // isAssigned(s);
    // showSection(s);
}
