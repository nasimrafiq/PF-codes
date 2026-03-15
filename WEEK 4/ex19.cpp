#include<iostream>
using namespace std;
main()
 {
    cout << "Red Rose: ";
    int redRoses;
    cin>>redRoses;
    cout << "White Rose: ";
    int whiteRoses;
    cin>>whiteRoses;
    cout << "Tulips: ";
    int tulips;
    cin>>tulips;
    
    double redPrice = 2.00;
    double whitePrice = 4.10;
    double tulipPrice = 2.50;
    double originalPrice;
    double finalPrice;
    double discount;

  
    originalPrice = (redRoses * redPrice) + (whiteRoses * whitePrice) + (tulips * tulipPrice);

    cout << "Original Price: " << originalPrice<<endl;

    if (originalPrice > 200) {
        discount = originalPrice * 0.20;
        finalPrice = originalPrice - discount;
        cout << "Price after Discount: " << finalPrice << endl;
    } else {
        cout << "Price after Discount: " << originalPrice << endl;
    }

 }