#include<iostream>
using namespace std;
main()
{
    cout<<"Enter the first number:";
    int number1;
    cin>>number1;
    cout<<"Enter the second nmber:";
    int number2;
    cin>>number2;
    if(number1<number2){
        cout<<"Number" <<number2<< "is greater than" <<number1<<endl;
    }
    else{
        cout<<"Number" <<number1<< "is greater than " <<number2<<endl;
        }
}