#include <iostream>
using namespace std;
main()
{
cout<<"Enter the weight of the fertilizer bag in pounds:";
float bagweight;
cin>>bagweight;
cout<<"Enter the cost of the bag:";
float cost;
cin>>cost;
cout<<"Enter the area in square feet that the bag can cover:";
float areacovered;
cin>>areacovered;
float costPerPound;
costPerPound = cost/bagweight;
float costPerSquareFoot;
costPerSquareFoot = cost/areacovered;
cout<<"     Result    "<<endl;
cout<<"Cost of fertilizer per pound:$"<<costPerPound<<endl;
cout<<"cost of using fertilizer per square foot:$"<<costPerSquareFoot<<endl;
}