#include<iostream>
using namespace std;

int main() 
{
    cout << "Enter Lilly's age: ";
    int age;
    cin >> age;
    cout << "Enter the price of the washing mechine: ";
    double washingMachinePrice;
    cin >> washingMachinePrice;
    cout << "Enter the unit price of each toy: ";
    int toyPrice;
    cin >> toyPrice;
    int toys = 0;
    double money = 0;
    int moneyGift = 10;
    int brotherTake = 0;

    for (int i = 1; i <= age; i++) 
    {
        if (i % 2 == 1) 
        {
            toys++;
        } 
        
        else 
        {
            money += moneyGift;
            brotherTake++;
            moneyGift += 10;
        }
    }

    money -= brotherTake;
    money += toys * toyPrice;

    if (money >= washingMachinePrice)
    {
        cout << "Yes! " << money - washingMachinePrice << endl;
    } 

    else 
    {
        cout << "No! " << washingMachinePrice - money << endl;
    }
}