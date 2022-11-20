#include "Precompile.h"
#include "Bulgaria.h"

void Burgas()
{
    cout << "Welcome to Burgas!" << endl; // Start of The program //
    int money = 1000;
    cout << "Current location: South bus station" << endl;

    cout << "Your current money is: 1000 EUR" << endl;
    cout << "First Mission Find a Way to get out of Burgas!" << endl;
    cout << endl;

    cout << "Choice: Go to the bus station and ask for help (Type: Station) / Explore Burgas (Type: Explore)" << endl;

    string choice;
    cin >> choice;

    system("CLS"); // Clears the console app //

    if (choice == "Station") // Make a choice //
    {
        cout << "You have Entered the station and there you leant that you can take Bus to the capital or Train" << endl;
        cout << "Choice: Take The Bus (will cost you 30 EUR but will take you a day)" << endl;
        cout << "Choice: Take The Train (will cost you 50 EUR but will take you 6 hours)" << endl;

        cin >> choice;

        if (choice == "Bus") // Money - 30 EUR//
        {
            system("CLS");

            money -= 30;
            cout << "Welcome to the capital of Bulgaria Sofia" << endl;
            cout << "Your current money is: " << money << " EUR" << endl;
        }
        else if (choice == "Train") // Money - 50 EUR//
        {
            system("CLS");

            money -= 50;
            cout << "Welcome to the capital of Bulgaria Sofia" << endl;
            cout << "Your current money is: " << money << " EUR" << endl;

            
        }
    }
    else if (choice == "Explore")
    {
        cout << "You have been exploring for 3 hours and found people that are going to take you to Sofia for 20 EUR but in 3 days" << endl;
        cout << "Accept because this is your only way out of Burgas: Yes" << endl;
        cin >> choice;
        
        system("CLS");

        if (choice == "Yes")
        {
            money -= 20;
            cout << "Your current money is: " << money << " EUR" << endl;
            cout << "New Mission: Find a place to stay for the next 3 days" << endl;
            cout << "Tip: Ask The people that you are going to be traveling with (Type: Ask)" << endl;
            cin >> choice;

            system("CLS");

            if (choice == "Ask")
            {
                cout << "They have told you that There is a Hotel nearby called: Bulgaria, 20 EUR a night (Your only Option)" << endl;
                money -= 60;
                cout << "New Mission: Find something to do for the next 3 days Maybe find a money making method" << endl;
                cout << "Suggestion:Sell Water" << endl;
                getline(cin, choice);

                system("CLS");

                if (choice == "Sell Water")
                {
                    cout << "1 day Passed 2 to go" << endl;
                    cout << "Your current money is: " << money << " EUR" << endl;
                    cout << "Go to the local store and Buy Water to sell" << endl;
                    cout << "Buy Water: 10 for 10 bottles (Sell them for 2 EUR)";
                    cout << "You buy Water and you are selling it and making lots of money 100 EUR" << endl;
                    money += 100;
                    cout << "Suggestion: Continue Selling Water" << endl;
                    getline(cin, choice);

                    system("CLS");

                    if (choice == "Continue Selling Water")
                    {
                        system("CLS");

                        cout << "Your current money is: " << money << " EUR" << endl;
                        cout << "2 day Passed 1 to go" << endl;
                        cout << "You repeat the same thing but make 200 EUR" << endl;
                        money += 200;
                        cout << "Go to Sofia" << endl;
                        getline(cin, choice);

                        if (choice == "Go to Sofia")
                        {
                            system("CLS");

                            cout << "Welcome to Sofia" << endl;
                            cout << "Your current money is: " << money << " EUR" << endl; 
                            
                        }
                    }
                }
            }
        }
    }

    if (money == 970)
    {
        cout << "Welcome to the capital of Bulgaria Sofia" << endl;
        cout << "Your current money is: 970 EUR" << endl;
        cout << "Current location: National Palace of Culture(NDK)" << endl;
        cout << endl;

        cout << "New mission: Find a way to the airport and go to Finland/Ireland!" << endl;
        cout << endl;

        cout << "Tip: Take The Subway to the airport" << endl;
        cout << "The Subway will cost you 50 EUR" << endl;

        string choice;
        cin >> choice;

        if (choice == "Subway")
        {
            cout << "Welcome To Sofia's airport" << endl;
            cout << "Your current money is: 920 EUR" << endl;
            cout << endl;

            cout << "Choose Your Next Destination: Finland/Ireland" << endl;
            cout << endl;

            cout << "A ticket to Finland will cost you 200 EUR" << endl;
            cout << "A ticket to Ireland will cost you 300 EUR" << endl;

            

        }
    }

    if (money == 950)
    {
        cout << "Welcome to the capital of Bulgaria Sofia" << endl;
        cout << "Your current money is: 950 EUR" << endl;
        cout << "Current location: National Palace of Culture(NDK)" << endl;
        cout << endl;

        cout << "New mission: Find a way to the airport and go to Finland/Ireland!" << endl;
        cout << endl;

        cout << "Tip: Take The Bus to the airport" << endl;
        cout << "The Bus will cost you 30 EUR" << endl;

        string choice;
        cin >> choice;

        if (choice == "Bus")
        {
            cout << "Welcome To Sofia's airport" << endl;
            cout << "Your current money is: 920 EUR" << endl;
            cout << endl;

            cout << "Choose Your Next Destination: Finland/Ireland" << endl;
            cout << endl;

            cout << "A ticket to Finland will cost you 200 EUR" << endl;
            cout << "A ticket to Ireland will cost you 300 EUR" << endl;

            
            

        }
    }

    if (money == 1220)
    {
        cout << "Welcome to the capital of Bulgaria Sofia" << endl;
        cout << "Your current money is: 1220 EUR" << endl;
        cout << "Current location: National Palace of Culture(NDK)" << endl;
        cout << endl;

        cout << "New mission: Find a way to the airport and Go to Finland/Ireland!" << endl;
        cout << endl;

        cout << "Tip: Take a Taxi to the airport" << endl;
        cout << "The Bus will cost you 20 EUR" << endl;

        string choice;
        cin >> choice;

        if (choice == "Taxi")
        {
            cout << "Welcome To Sofia's airport" << endl;
            cout << "Your current money is: 1200 EUR" << endl;
            cout << endl;

            cout << "Choose Your Next Destination: Finland/Ireland" << endl;
            cout << endl;

            cout << "A ticket to Finland will cost you 200 EUR" << endl;
            cout << "A ticket to Ireland will cost you 300 EUR" << endl;

            
        }
    }
}