#include <iostream>
using namespace std;

// --- Global Variables (Data) ---
string playerName[15] = {"Fakhar Zaman", "Brendon McCullum", "Abdullah Shafique", "Mohammad Hafeez", "AB Devilliers", "Ben Dunk", "David Wiese", "Rashid Khan", "Shaheen Shah Afridi", "Haris Rauf", "Zaman Khan", "Sikandar Raza", "Sam Billings", "Yasir Shah", "Chris Lynn"};
string role[15] = {"Batsman", "Batsman", "Batsman", "Allrounder", "Batsman", "Batsman", "Allrounder", "Bowler", "Bowler", "Bowler", "Bowler", "Allrounder", "Batsman", "Bowler", "Batsman"};
string nationality[15] = {"Pakistan", "NewZealand", "Pakistan", "Pakistan", "SouthAfrica", "Australia", "Namibia", "Afghanistan", "Pakistan", "Pakistan", "Pakistan", "Zimbabwe", "England", "Pakistan", "Australia"};
int runs[15] = {2500, 2200, 1200, 2000, 5000, 1800, 1200, 300, 200, 150, 100, 1600, 1700, 100, 2100};
float avg[15] = {32.5, 35, 30.2, 28, 40, 29, 28.4, 18, 15, 12, 10, 31.5, 33, 14, 34};
float sr[15] = {145, 150, 130, 125, 150, 140, 138, 115, 110, 105, 102, 138, 135, 100, 148};
int wickets[15] = {5, 2, 2, 50, 1, 1, 45, 130, 120, 110, 95, 70, 2, 80, 1};
float eco[15] = {7, 7, 7, 7.2, 7, 7, 7.5, 6.5, 6.8, 7.0, 7.2, 7.1, 7, 6.9, 7};

// --- FUNCTIONS SECTION ---

// Function 1: Main Menu dikhane ke liye
void displayHeader()
{
    cout << endl
         << "======================================" << endl;
    cout << "======  LAHORE QALANDARS SYSTEM  ======" << endl;
    cout << "======================================" << endl;
    cout << "1. Admin Login" << endl;
    cout << "2. View Players List" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter Choice: ";
}

// Function 2: Admin Login handle karne ke liye
bool performLogin()
{
    string pass;
    int attempts = 0;
    while (attempts < 3)
    {
        cout << "Enter Admin Password: ";
        cin >> pass;
        if (pass == "admin123")
        {
            cout << "Login Successful!" << endl;
            return true;
        }
        else
        {
            attempts++;
            cout << "Wrong Password! Attempts left: " << 3 - attempts << endl;
        }
    }
    return false;
}

// Function 3: Players ki detail dikhane ke liye (Admin ke liye)
void showDetailedList()
{
    for (int i = 0; i < 15; i++)
    {
        cout << endl
             << "-----------------------------" << endl;
        cout << "Name: " << playerName[i] << endl;
        cout << "Role: " << role[i] << endl;
        cout << "Nationality: " << nationality[i] << endl;

        if (role[i] == "Batsman")
        {
            cout << "Runs: " << runs[i] << endl;
            cout << "Average: " << avg[i] << endl;
            cout << "Strike rate:" << sr[i] << endl;
        }
        else if (role[i] == "Bowler")
        {
            cout << "Wickets: " << wickets[i] << endl;
            cout << "Economy: " << eco[i] << endl;
        }
        else
        {
            cout << "Runs: " << runs[i] << " | Wickets: " << wickets[i] << endl;
        }
        cout << "-----------------------------" << endl;
    }
}

// Function 4: Player edit karne ke liye
void updatePlayer()
{
    int i;
    cout << "Enter Index (0-14) to Edit: ";
    cin >> i;
    if (i >= 0 && i < 15)
    {
        cout << "Enter New Name: ";
        cin >> playerName[i];
        cout << "Enter New Nationality: ";
        cin >> nationality[i];
        cout << "Enter New Role: ";
        cin >> role[i];
        if ( role[i] == "Batsman")
        {
             cout << "Enter Runs scored:" ;
             cin >> runs[i];
             cout << "Enter his average:" ;
             cin >> avg[i];
             cout << "Enter his strike rate:" ;
             cin >> sr[i];
        
        }
        else if (role[i] == "Bowler")
        {
            cout << "Enter wickets taken:" ;
            cin >> wickets[i];
            cout << "Enter his economy:" ;
            cin >> eco[i];
        }
        else if (role[i] == "Alrounder")
        {
            cout << "Enter runs scored:" ;
            cin >> runs[i];
            cout << "Enter wickets taken: " ;
            cin >> wickets[i];
        } 
        cout << "Record Updated!" << endl;
    }
    else
    {
        cout << "Invalid Index!" << endl;
    }
}

// --- MAIN INTERFACE ---

int main()
{
    int choice;
    while (true)
    {
        displayHeader();
        cin >> choice;

        if (choice == 1)
        {
            if (performLogin())
            {
                int adminChoice;
                while (true)
                {
                    cout << endl
                         << "--- ADMIN PANEL ---" << endl;
                    cout << "1. View Detailed Records" << endl;
                    cout << "2. Edit Player Data" << endl;
                    cout << "3. Logout" << endl;
                    cout << "Choice: ";
                    cin >> adminChoice;

                    if (adminChoice == 1)
                        showDetailedList();
                    else if (adminChoice == 2)
                        updatePlayer();
                    else
                        break;
                }
            }
            else
            {
                cout << "Access Denied! Returning to Home." << endl;
            }
        }
        else if (choice == 2)
        {
            cout << endl
                 << "--- PLAYER LIST ---" << endl;
            for (int i = 0; i < 15; i++)
            {
                cout << i << ". " << playerName[i] << " (" << role[i] << ")" << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Exiting System... Allah Hafiz!" << endl;
            break;
        }
        else
        {
            cout << "Invalid Option Selected!" << endl;
        }
    }
    return 0;
}