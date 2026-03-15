#include<iostream>
using namespace std;
main()
 {
    cout << "Temperature City 1: ";
    float temp1;
    cin >> temp1;
    cout << "Temperature City 2: ";
    float temp2;
    cin >> temp2;
    float difference;
     if (temp1 > temp2) {
        difference = temp1 - temp2;
    } else {
        difference = temp2 - temp1;
    }
     if (difference > 10) {
        cout << "Difference is too Big" << endl;
    }
    else{
    cout << "Program Ends" << endl;
    }
}