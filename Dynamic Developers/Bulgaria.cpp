#include "Precompile.h"
#include "Bulgaria.h"

void Burgas()
{
    cout << "Welcome to Burgas!" << endl;

    cout << "Current location: South bus station" << endl;

    cout << "Your current money is: 1000 BGN" << endl;
    cout << "First Mission Find a Way to get out of Burgas!" << endl;

    cout << endl;

    cout << "Choice: Go to the bus station and ask for help (Type: Station) / Explore Burgas (Type: Explore)" << endl;

    string choice;

    cin >> choice;

    system("CLS");

    int days = 0;
    int hours = 0;

    if (choice == "Station")
    {
        cout << "You have Entered the station and there you leant that you can take Bus to the capital or Train" << endl;
        cout << "Choice: Take The Bus (will cost you 30 BGN but will take you a day)" << endl;
        cout << "Choice: Take The Train (will cost you 50 BGN but will take you 6 hours)" << endl;

        cin >> choice;

        if (choice == "Bus")
        {
            system("CLS");

            cout << "Welcome to the capital of Bulgaria Sofia" << endl;
            days = 1;
            cout << "Your current money is: 970 BGN" << endl;

        }
        else if (choice == "Train")
        {
            system("CLS");

            cout << "Welcome to the capital of Bulgaria Sofia" << endl;
            hours = 6;
            cout << "Your current money is: 950 BGN" << endl;
        }
    }
    else if (choice == "Explore")
    {
        cout << "You have been exploring for 3 hours and found people that are going to take you to Sofia for 20 BGN but in 3 days" << endl;
        cout << "Accept because this is your only way out of Burgas: Yes" << endl;
        cin >> choice;
        days = 3;
        

        system("CLS");

        if (choice == "Yes")
        {
            cout << "Your current money is: 980 BGN" << endl;
            cout << "New Mission: Find a place to stay for the next 3 days" << endl;
            cout << "Tip: Ask The people that you are going to be traveling with (Type: Ask)" << endl;
            cin >> choice;

            system("CLS");

            if (choice == "Ask")
            {
                cout << "They have told you that There is a Hotel nearby called: Bulgaria, 20 BGN a night (Your only Option)" << endl;
                cout << "New Mission: Find something to do for the next 3 days Maybe find a money making method" << endl;
                cout << "Suggestion:Sell Water" << endl;
                getline(cin, choice);

                system("CLS");

                if (choice == "Sell Water")
                {
                    cout << "1 day Passed 2 to go" << endl;
                    cout << "Your current money is: 920 BGN" << endl;
                    cout << "Go to the local store and Buy Water to sell" << endl;
                    cout << "Buy Water: 10 for 10 bottles (Sell them for 2 BGN)";
                    cout << "You buy Water and you are selling it and making lots of money 100 BGN" << endl;
                    cout << "Suggestion: Continue Selling Water" << endl;

                    getline(cin, choice);

                    system("CLS");

                    if (choice == "Continue Selling Water")
                    {
                        system("CLS");

                        cout << "Your current money is: 1020 BGN" << endl;
                        cout << "2 day Passed 1 to go" << endl;
                        cout << "You repeat the same thing but make 200 BGN" << endl;
                        cout << "Go to Sofia" << endl;
                        getline(cin, choice);

                        if (choice == "Go to Sofia")
                        {
                            system("CLS");

                            cout << "Welcome to Sofia" << endl;
                            cout << "Your current money is: 1220 BGN" << endl;
                            
                        }
                    }
                }
            }
        }
    }
}