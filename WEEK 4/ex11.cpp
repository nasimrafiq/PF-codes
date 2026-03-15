#include<iostream>
using namespace std;
main()
{
    cout<<"Enter your total amount:";
    double bill;
    cin>>bill;
    double discountedBill;
    if(bill <= 5000){
        discountedBill= bill - (bill*0.05);
        cout<<"Your discounted price is:"<<discountedBill<<endl;
    }
    else{
        discountedBill = bill- (bill*0.10);

    }
    cout<<"Your discounted amount is:" << discountedBill << endl;
}