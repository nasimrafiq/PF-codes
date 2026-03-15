#include<iostream>
using namespace std;
main(){
    cout<<"Enter the 1st number: ";
    int num1;
    cin>>num1;

    cout<<"Enter the operator: ";
    char ope;
    cin>>ope;

    cout<<"Enter the 2nd number: ";
    int num2;
    cin>>num2;

    int fresult;

    if(ope=='+')
    {
     fresult=num1-num2;
    }

    else if(ope=='-')
    {
        fresult=num1+num2;
    }

    else if(ope=='*')
    {
        fresult=num1/num2;
    }

    else if(ope=='/')
    {
        fresult=num1*num2;
    }

    cout<<fresult;

}