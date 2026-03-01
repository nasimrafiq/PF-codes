#include <iostream>
using namespace std;
main()
{
cout<<"Enter the name of the movie:";
string name;
cin>>name;
cout<<"Enter the adult ticket price:$";
float adult;
cin>>adult;
cout<<"Enter the child ticket price:$";
float child;
cin>>child;
cout<<"Enter the number of adult tickets sold:";
float adultTicket;
cin>>adultTicket;
cout<<"Enter the number of child tickets sold:";
float childTicket;
cin>>childTicket;
cout<<"Enter the percentage of amount to be donated to charity:";
float charity;
cin>>charity;
float total;
total = (adult*adultTicket)+(child*childTicket);
float donated;
donated = total*charity/100;
float remaining;
remaining = total-donated;
cout<<"____________________________________________"<<endl;
cout<<"Movie:"<<name<<endl;
cout<<"Total amount generated from sales:$"<<total<<endl;
cout<<"Donation to charity("<<charity<<"):"<<donated<<endl;
cout<<"Remaining amount after donation:"<<remaining<<endl;
}