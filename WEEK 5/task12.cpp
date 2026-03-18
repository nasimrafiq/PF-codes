#include<iostream>
using namespace std;
main()
{
    string book;
    int choice;
    cout <<"---- Library System----"<<endl;
    cout <<"1.Add Books"<<endl;
    cout <<"2.View Books"<<endl;
    cout <<"3.Borrow Books"<<endl;
    cout <<"4.Issue Books"<<endl;
    cout <<"5.Exit"<<endl;
    cout << "Enter your choice:";
    cin >> choice;
    if (choice == 1){
    cout <<"Enter the book name:";
    cin >>book;
    cout << "You added a book:"<<book;
    }
    else if(choice ==2){
      cout <<"Enter to view a book:";
    cin >>book;
    cout << "You viewed a book:"<<book;
    } 
    else if(choice ==3){
        cout <<"Enter the borrowed book:";
    cin >>book;
    cout << "You borrowed a book:"<<book;
    } 
    else if(choice ==4){
        cout <<"Enter the issued book:";
    cin >>book;
    cout << "You issued a book:"<<book;
    }  
    else if (choice ==5){
        cout <<"Exit the library. Goodbye!";
    }
    else{
        cout <<"Program Ends";
    }
    }