#include<iostream>
using namespace std;
main() 
   {
    cout << "Holidays: ";
    int holidays;
    cin >> holidays;
    int workingDays;
    int totalDays = 365;
    workingDays = totalDays - holidays;
    int gameTime;
    gameTime = (workingDays * 63) + (holidays * 127);
    int norm = 30000;
    int diff;
    diff = norm - gameTime;
    if (gameTime <= norm) {
        cout << "Tom sleeps well" << endl;
        int hours = diff / 60;
        int minutes = diff % 60;
        cout << hours << " hours and " << minutes << " minutes less for play" << endl;
    } 
    else {
        cout << "Tom will run away" << endl;
        int overPlay;
        overPlay = gameTime - norm;
        int hours;
        hours = overPlay / 60;
        int minutes;
        minutes = overPlay % 60;
        cout << hours << " hours and " << minutes << " minutes for play" << endl;
    }

    
}