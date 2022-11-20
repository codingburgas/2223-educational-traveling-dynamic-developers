#include "Precompile.h"
#include "Game.h"

void Bulgaria()
{
    cout << "Welcome to Burgas!" << endl;
    cout << "Current location: South bus station" << endl;
    cout << "First Mission Find a Way to get out of Burgas!" << endl;

    cout << endl;

    cout << "Choice: Go to the bus station and ask for help (Type: Station) / Explore Burgas (Type: Explore)" << endl;



    string choice;
    cin >> choice;

    system("CLS");

    
    if (choice == "Station" || choice == "station")
    {
        cout << "You have Entered the station and there you leant that you can take Bus to the capital or Train" << endl;
        cout << "Choice: Take The Bus" << endl;
        cout << "Choice: Take The Train" << endl;

        cin >> choice;

        if (choice == "Bus" || choice == "bus")
        {
            system("CLS");

            cout << "Welcome to the capital of Bulgaria, Sofia!" << endl;
            cout << "Current location: National Palace of Culture (NDK)" << endl;
            cout << endl;

            cout << "New mission: Find a way to the airport and go to Finland/Ireland!" << endl;
            cout << endl;

            cout << "Tip: Take The Subway to the airport" << endl;

            string choice;
            cin >> choice;

            if (choice == "Subway" || choice == "subway")
            {
                system("CLS");

                cout << "Welcome To Sofia's airport" << endl;
                cout << "Choose Your Next Destination:" << endl;
                cout << "Available: Finland" << endl;
                cout << "Locked: Ireland" << endl;
                cout << endl;

                cin >> choice;

                if (choice == "Finland" || choice == "finland")
                {
                    Finland();
                }
                else
                {
                    system("CLS");
                    cout << "Incorrect Input" << endl;
                    system("pause");
                }

            }
            else
            {
                system("CLS");
                cout << "Incorrect Input" << endl;
                system("pause");
            }

        }
        else if (choice == "Train" || choice == "train")
        {
            system("CLS");

            cout << "Welcome to the capital of Bulgaria Sofia" << endl;
            cout << "Current location: National Palace of Culture (NDK)" << endl;
            cout << endl;

            cout << "New mission: Find a way to the airport and go to Finland/Ireland!" << endl;
            cout << "Tip: Take The Bus to the airport" << endl;

            string choice;
            cin >> choice;

            if (choice == "Bus" || choice == "bus")
            {
                system("CLS");

                cout << "Welcome To Sofia's airport" << endl;
                cout << "Choose Your Next Destination:" << endl;
                cout << "Available: Finland" << endl;
                cout << "Locked: Ireland" << endl;
                cout << endl;

                cin >> choice;

                if (choice == "Finland" || choice == "finland")
                {
                    Finland();
                }
                else
                {
                    system("CLS");
                    cout << "Incorrect Input" << endl;
                    system("pause");
                }
            }
            else
            {
                system("CLS");
                cout << "Incorrect Input" << endl;
                system("pause");
            }
        }
        else
        {
            system("CLS");
            cout << "Incorrect Input" << endl;
            system("pause");
        }
    }
    else if (choice == "Explore" || choice == "explore")
    {
        cout << "You have been exploring for 3 hours and found people that are going to take you to Sofia" << endl;
        cout << "Accept because this is your only way out of Burgas (Type: Yes)" << endl;
        cin >> choice;

        system("CLS");

        if (choice == "Yes" || choice == "yes")
        {
            cout << "New Mission: Find a place to stay" << endl;
            cout << "Tip: Ask The people that you are going to be traveling with (Type: Ask)" << endl;
            cin >> choice;

            system("CLS");

            if (choice == "Ask" || choice == "ask")
            {
                cout << "They have told you that There is a Hotel nearby called: Bulgaria" << endl;
                cout << "Suggestion:Go to Sofia (Type: Sofia)" << endl;

                cin >> choice;
                system("CLS");

                if (choice == "Sofia" || choice == "sofia")
                {

                    cout << "Welcome to the capital of Bulgaria Sofia" << endl;
                    cout << "Current location: National Palace of Culture (NDK)" << endl;
                    cout << endl;

                    cout << "New mission: Find a way to the airport and Go to Finland/Ireland!" << endl;
                    cout << endl;

                    cout << "Tip: Take a Taxi to the airport" << endl;

                    cin >> choice;

                    system("CLS");

                    if (choice == "Taxi" || choice == "taxi")
                    {
                        system("CLS");

                        cout << "Welcome To Sofia's airport" << endl;
                        cout << "Choose Your Next Destination:" << endl;
                        cout << "Available: Finland" << endl;
                        cout << "Locked: Ireland" << endl;
                        cout << endl;

                        cin >> choice;

                        if (choice == "Finland" || choice == "finland")
                        {
                            Finland();
                        }
                        else
                        {
                            system("CLS");
                            cout << "Incorrect Input" << endl;
                            system("pause");
                        }

                    }
                    else
                    {
                        system("CLS");
                        cout << "Incorrect Input" << endl;
                        system("pause");
                    }

                }
                else
                {
                    system("CLS");
                    cout << "Incorrect Input" << endl;
                    system("pause");
                }

            }
            else
            {
                system("CLS");
                cout << "Incorrect Input" << endl;
                system("pause");
            }

        }
        else
        {
            system("CLS");
            cout << "Incorrect Input" << endl;
            system("pause");
        }

    }
    else
    {
        system("CLS");
        cout << "Incorrect Input" << endl;
        system("pause");
    }
}