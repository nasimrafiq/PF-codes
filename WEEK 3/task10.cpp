#include <iostream>
using namespace std;
main()
{
 cout<<"Enter the name of the team:";
 string name;
 cin>>name;
 cout<<"Enter the number of wins:";
 float wins;
 cin>>wins;
 cout<<"Enter the number of draws:";
 float draws;
 cin>>draws;
 cout<<"Enter the number of losses:";
 float loss;
 cin>>loss;
 float marks;
 marks = (3*wins)+(1*draws)+(0*loss);
 cout<<name << "has obtained"<< marks<< " points in this Asia cup tournament.";
}