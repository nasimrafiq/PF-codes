#include<iostream>
using namespace std;
main()
{
    cout<<"Please enter the correct password:";
    string user_enter;
    cin>>user_enter;
    string my_pass;
    my_pass = "pass@123";
    if(my_pass == user_enter){
        cout<<"Congratulations ! the password is correct.";
    }
    else{
        cout<<"Soryy, this is wrong you cannot go further.";
    }
    
}