#include <iostream>
using namespace std;
main()
{
cout<<"Enter the current world population:";
float current;
cin>>current;
cout<<"Enter the montly birth rate (no of births per year):";
float rate;
cin>>rate;
float population_in_3_decades;
population_in_3_decades = current+(rate*12*30);
cout<<"Population in three decades will be:"<<population_in_3_decades<<endl;
}
