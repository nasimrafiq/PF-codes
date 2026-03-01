#include <iostream>
using namespace std;
main()
{
cout<<"Enter imposters:";
float imp;
cin>>imp;
cout<<"Enter players:";
float ply;
cin>>ply;
float chance;
chance = 100.0*(imp/ply);
cout<<"Chance of being an imposter ="<<chance<<"%"<<endl;
}
