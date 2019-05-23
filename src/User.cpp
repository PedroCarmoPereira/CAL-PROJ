#include "User.h"

User::User(int id, int sourceID, int destinationID, tms dep, tms arr, int dT, int aT, bool driving){
    this->id = id;
    this->sourceID = sourceID;
    this->destinationID = destinationID;
    this->arrival = arr;
    this->departure = dep;
    this->depTol = dT;
    this->arrTol = aT;
    this->driver = driving;
}

bool User::isDriver() const{
    return this->driver;
}

unsigned User::getId()const{return this->id;}

int User::getSourceID() const{ return this->sourceID;}

int User::getDestinationID() const{ return this->destinationID;}

bool User::withinArrTol(tms eta){

    time_t arrWindow = mktime(&this->arrival) + this->arrTol*60;
    time_t etaT = mktime(&eta);
    return etaT <= arrWindow;
}

bool User::withinDepTol(tms etd){

    time_t depWindow = mktime(&this->departure) + this->depTol*60;
    time_t etdT = mktime(&etd);
    return etdT <= depWindow;
}
