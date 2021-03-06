#include "Driver.h"
#include "User.h"

/**
 * Constructor
**/
Driver::Driver(int id, int s, int d, tms dep, tms arr, int dT, int aT, unsigned cap):User(id, s, d, dep, arr, dT, aT, true), capacity(cap), currOcup(0){}

/**
 * Set funtion
**/
void Driver::setCurrOcup(int co){ this->currOcup = co;}

/**
 * Get funtions
**/
unsigned Driver::getCapacity() const{ return this->capacity;}
unsigned Driver::getCurrOcup() const{ return this->currOcup;}
