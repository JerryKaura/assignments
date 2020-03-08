#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Room
{
    int room_number;
    int seat_limit;
    bool isOccupied();
    bool hasEnoughSeats(int n);
    public:
        Room();
}

class Section
{
    int section_number;
    int enrol_limit;
    int room_number;
    public:
        Section();
        bool hasRoom();
        bool scheduled();
        void showRoom();
}

Section::Section() {
    
}

Room::Room(int rmNo, int seats, bool occupied) {

}

class Class {
    void assignRoom();
}