#include <iostream>
using namespace std;

int main()
{
    string playerName[15] = {
        "Fakhar Zaman","Brendon McCullum","Abdullah Shafique","Mohammad Hafeez","Abraham Benjamin Devilliers",
        "Ben Dunk","David Wiese","Rashid Khan","Shaheen Shah Afridi","Haris Rauf",
        "Zaman Khan","Sikandar Raza","Sam Billings","Yasir Shah","Chris Lynn"
    };

    string role[15] = {
        "Batsman","Batsman","Batsman","Allrounder","Batsman",
        "Batsman","Allrounder","Bowler","Bowler","Bowler",
        "Bowler","Allrounder","Batsman","Bowler","Batsman"
    };

    string nationality[15] = {
        "Pakistan","NewZealand","Pakistan","Pakistan","SouthAfrica",
        "Australia","Namibia","Afghanistan","Pakistan","Pakistan",
        "Pakistan","Zimbabwe","England","Pakistan","Australia"
    };

    int runs[15] = {2500,2200,1200,2000,5000,1800,1200,300,200,150,100,1600,1700,100,2100};
    float avg[15] = {32.5,35,30.2,28,40,29,28.4,18,15,12,10,31.5,33,14,34};
    float sr[15] = {145,150,130,125,150,140,138,115,110,105,102,138,135,100,148};
    int innings[15] = {90,80,50,70,100,65,60,35,30,28,25,75,60,20,85};
    int highest[15] = {106,158,89,99,133,104,91,40,30,25,20,95,88,25,113};

    int wickets[15] = {5,2,2,50,1,1,45,130,120,110,95,70,2,80,1};
    float eco[15] = {7,7,7,7.2,7,7,7.5,6.5,6.8,7.0,7.2,7.1,7,6.9,7};

    int choice;

    while(true)
    {
        cout << "====== LAHORE QALANDARS SYSTEM ======"<<endl;
        cout << "1. Admin Login"<<endl;
        cout << "2. View Players"<<endl;
        cout << "3. Exit"<<endl;
        cout << "Enter Choice: ";
        cin >> choice;

        if(choice == 1)
        {
            string pass;
            int attempts = 0;

            while(attempts < 3)
            {
                cout << "Enter Password: ";
                cin >> pass;

                if(pass == "3titles")
                {
                    cout << "Login Successful!" <<endl;
                    break;
                }
                else
                {
                    cout << "Wrong Password!" <<endl;
                    attempts++;
                }
            }

            if(attempts == 3)
            {
                cout << "Access Denied!"<<endl;
                continue;
            }

            int adminChoice;

            while(true)
            {
                cout << "--- ADMIN PANEL ---"<<endl;
                cout << "1. View Players"<<endl;
                cout << "2. Edit Player"<<endl;
                cout << "3. Remove Player"<<endl;
                cout << "4. Logout"<<endl;
                cin >> adminChoice;

                if(adminChoice == 1)
                {
                    for(int i=0;i<15;i++)
                    {
                        cout << "-----------------------------";
                        cout << "Name: " << playerName[i] << endl;
                        cout << "Role: " << role[i] << endl;
                        cout << "Nationality: " << nationality[i] << endl;

                        if(role[i] == "Batsman")
                        {
                            cout << "Runs: " << runs[i] << endl;
                            cout << "Average: " << avg[i] << endl;
                            cout << "Strike Rate: " << sr[i] << endl;
                        }
                        else if(role[i] == "Bowler")
                        {
                            cout << "Wickets: " << wickets[i] << endl;
                            cout << "Economy: " << eco[i] << endl;
                        }
                        else
                        {
                            cout << "Runs: " << runs[i] << endl;
                            cout << "Wickets: " << wickets[i] << endl;
                        }
                        cout << "-----------------------------\n";
                    }
                }
                else if(adminChoice == 2)
                {
                    int i;
                    cout << "Enter Index (0-14): ";
                    cin >> i;

                    cout << "New Name: ";
                    cin >> playerName[i];

                    cout << "Role: ";
                    cin >> role[i];

                    cout << "Nationality: ";
                    cin >> nationality[i];
                }
                else if(adminChoice == 3)
                {
                    int i;
                    cout << "Enter Index: ";
                    cin >> i;
                    playerName[i] = "EMPTY";
                }
                else
                {
                    break;
                }
            }
        }
        else if(choice == 2)
        {
            for(int i=0;i<15;i++)
            {
                cout << i << ". " << playerName[i] << " (" << role[i] << ")\n";
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}
