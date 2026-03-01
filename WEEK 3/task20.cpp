#include <iostream>
using namespace std;
main()
{
cout<<"Enter initial velocity(m/s):";
float u;
cin>>u;
cout<<"Enter acceleration:";
float a;
cin>>a;
cout<<"Enter time(s):";
float t;
cin>>t;
float result;
result = u+a*t;
cout<<"Final velocity(m/s):"<<result<<endl;
}