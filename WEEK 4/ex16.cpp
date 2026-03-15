#include<iostream>
using namespace std;
 main()
  {
    cout << "Ener the country name: ";
    string country;
    cin >> country;
    cout << "Ticket Price: ";
    double ticketPrice;
    cin >> ticketPrice;
    double finalPrice;
    double discount;
  
    if (country == "Ireland") {
        discount = ticketPrice * 0.10;
    } 
    else {
        discount = ticketPrice * 0.05;
    }
    finalPrice = ticketPrice - discount;
    cout << "Discounted Price: " << finalPrice << endl;

   
}