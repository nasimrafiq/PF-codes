#include <iostream>
using namespace std;
main()
{
cout<<"Enter vegetable price per kilogram (in coins):";
float vegPricePerKg;
cin>>vegPricePerKg;
cout<<"Enter fruit price per kilogram (in coins):";
float fruitPricePerKg;
cin>>fruitPricePerKg;
cout<<"Enter total kilograms of vegetable:";
float totalKgVeg;
cin>>totalKgVeg;
cout<<"Enter total kilograms of fruits:";
float totalKgFruit;
cin>>totalKgFruit;
float totalcoins;
totalcoins =(vegPricePerKg*totalKgVeg)+(fruitPricePerKg*totalKgFruit);
float totalrupees;
totalrupees = totalcoins/1.94;
cout<<"Total earning in rps:"<<totalrupees<<endl;
}
