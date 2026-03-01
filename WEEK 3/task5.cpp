#include <iostream>
using namespace std;
main()
{
     cout<<"Enter Your Name: ";
     string name;
     cin>>name;
     cout<<"Enter Matric Marks (Out of 1100): ";
     float matric;
     cin>>matric;
     cout<<"Enter Inter Marks (Out of 550): ";
     float inter;
     cin>>inter;
     cout<<"Enter Ecat Marks (Out of 400): ";
     float ecat;
     cin>>ecat;
     float agg;
     agg=(0.5 * (ecat*100/400)) + (0.4 * (inter*100/550)) + (0.1 * (matric*100/1100));
     cout<<"Your Aggregate for UET is: " <<agg << "%";
}