#include <iostream>
using namespace std;
main()
{
cout<<"Enter imposter count:";
float imp;
cin>>imp;
cout<<"Enter player count:";
float ply;
cin>>ply;
float chance;
chance = 100.0*(imp/ply);
cout<<"Chance of being an imposter ="<<chance<<"%"<<endl;
}