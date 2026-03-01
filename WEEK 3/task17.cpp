#include <iostream>
using namespace std;
main()
{
cout<<"Enter paint areas:";
float n;
cin>>n;
cout<<"Enter width:";
float w;
cin>>w;
cout<<"Enter height:";
float h;
cin>>h;
float result;
result = n/(w*h);
cout<<"Walls painted="<<result<<endl;
}