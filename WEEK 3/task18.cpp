#include <iostream>
using namespace std;
main()
{
  cout<<"Enter sides:";
  int sides;
  cin>>sides;
  int sum_of_angles;
  sum_of_angles = (sides - 2) * 180;
  cout<<"The sum of internal angles is:"<<sum_of_angles<<"degrees"<<endl;
}