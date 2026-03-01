#include <iostream>
using namespace std;
main()
{
cout<<"Number of square meters you can paint:";
float n;
cin>>n;
cout<<"Width of the single wall (in meters):";
float w;
cin>>w;
cout<<"Height of the single wall in (in meters):";
float h;
cin>>h;
float result;
result = n/(w*h);
cout<<"Number of walls you can paint ="<<result<<endl;
}