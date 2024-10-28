//Jose Moreno
// SNHU CS-210 Programming Languages
// 09/22/2024
//Clock.h 
//Header file used 
#ifndef CLOCK_H_
#define CLOCK_H_
#pragma warning(disable : 4996) //_CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;
//Clock class declaration
class Clock
{
private:
    //structure that stores time
    struct tm* localTime;
    //stores hours, minutes, seconds added to the clock
    int d_hours;
    int d_mins;
    int d_secs;
    bool format_24;  //flag to store if the clock is set to 24 hour format or not
public:
    //flag to store if the clock is set to 24 hour format or not
    Clock(bool format_24);
    //call all the methods 
    void addHours(int hours);    //Method to add hours to the clock
    void addMinutes(int mins);   //Method to add minutes to the clock
    void addSeconds(int secs);   //Method to add seconds to the clock
    void resetClock();    //Method to reset the clock
    void displayTime(ostream& out);   //Method to display the time
};