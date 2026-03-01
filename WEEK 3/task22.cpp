#include <iostream>
using namespace std;
main()
{
cout<<"Enter the name of the person:";
string name;
cin>>name;
cout<<"Enter the target weight loss in kg:";
float weight;
cin>>weight;
float result;
result = weight * 15;
cout<<name<< "will need" <<result<< "days to loose" <<weight<< "kg by following the doctor's suggestion"<<endl;
}