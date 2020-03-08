#include <iostream>
#include "section_room.h"
using namespace std;

int main() {
    Section b(0,75,0);
    Room a(10,0,30);
    a.getValues();
    b.getValues();
    a.display();
    if(a.roomStatus()){
        b.setRoom(a.getRoomNumber());
        a.changeStatus();
    }
    a.display();
    b.display();

    return 0;
}
