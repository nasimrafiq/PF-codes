#include <iostream>
using namespace std;
main()
{
cout<<"Number of minutes:";
float min;
cin>>min;
cout<<"frames per second:";
float fps;
cin>>fps;
int frames;
frames = min * 60 * fps;
cout<<"Total number of frames=" <<frames<<endl;
} 