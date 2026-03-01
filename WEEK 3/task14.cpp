#include <iostream>
using namespace std;
main()
{
cout<<"Enter minutes:";
float min;
cin>>min;
cout<<"Enter fps:";
float fps;
cin>>fps;
int frames;
frames = min * 60 * fps;
cout<<"Total frames=" <<frames<<endl;
} 