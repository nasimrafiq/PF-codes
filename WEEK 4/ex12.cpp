#include<iostream>
using namespace std;
main()
{
    double monthlysalary = 10000;
    double laptopPrice = 50000;
    double advancePercentage = 0.50;
    int monthsRequested = 6;
    double totalAdvance;
    totalAdvance = (monthlysalary*advancePercentage)*monthsRequested;
    int monthsRequired;
    monthsRequired = laptopPrice/(monthlysalary*advancePercentage);
    if(totalAdvance>=laptopPrice){
       cout<<"Ali can buy the laptop with his advance salary.";
    }
    else{
        cout<<"ALi cannot buy the laptop with his salary."<<endl;
    
        cout<<"Months required to buy the laptop:"<<monthsRequired<<endl;
    }
}