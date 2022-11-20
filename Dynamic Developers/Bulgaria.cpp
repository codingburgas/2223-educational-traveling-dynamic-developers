#include "Precompile.h"
#include "Game.h"

void Bulgaria()
{
    TryAgain:
    cout << "Welcome to Burgas!" << endl;
    cout << "Current location: South bus station" << endl;
    cout << "First Mission Find a Way to get out of Burgas!" << endl;

    cout << endl;

    cout << "Choice: Go to the bus station and ask for help (Type: Station) / Explore Burgas (Type: Explore)" << endl;

    
    cout << "User Input: ";
    string choice;
    cin >> choice;

    system("CLS");

    
    if (choice == "Station" || choice == "station")
    {
        TryAgain2:
        cout << "You have Entered the station and there you leant that you can take Bus to the capital or Train" << endl;
        cout << "Choice: Take The Bus" << endl;
        cout << "Choice: Take The Train" << endl;

        cout << "User Input: ";
        cin >> choice;

        if (choice == "Bus" || choice == "bus")
        {
            TryAgain3:
            system("CLS");

            cout << "Welcome to the capital of Bulgaria, Sofia!" << endl;
            cout << "Current location: National Palace of Culture (NDK)" << endl;
            cout << endl;

            cout << "New mission: Find a way to the airport and go to Finland/Ireland!" << endl;
            cout << endl;

            cout << "Tip: Take The Subway to the airport" << endl;
            cout << "User Input: ";
            string choice;
            cin >> choice;

            if (choice == "Subway" || choice == "subway")
            {
                system("CLS");
                TryAgain6:
                cout << "Welcome To Sofia's airport" << endl;
                cout << "Choose Your Next Destination:" << endl;
                cout << "Available: Finland" << endl;
                cout << "Locked: Ireland" << endl;
                cout << endl;

                cout << "User Input: ";
                cin >> choice;

                if (choice == "Finland" || choice == "finland")
                {
                    
                    Finland();
                }
                else
                {
                    
                    cout << "Incorrect Input" << endl;
                    system("pause");
                    system("CLS");
                    goto TryAgain6;
                }

            }
            else
            {
                
                cout << "Incorrect Input" << endl;
                system("pause");
                system("CLS");
                goto TryAgain3;
            }

        }
        else if (choice == "Train" || choice == "train")
        {
            system("CLS");
            TryAgain4:

            cout << "Welcome to the capital of Bulgaria Sofia" << endl;
            cout << "Current location: National Palace of Culture (NDK)" << endl;
            cout << endl;

            cout << "New mission: Find a way to the airport and go to Finland/Ireland!" << endl;
            cout << "Tip: Take The Bus to the airport" << endl;

            string choice;

            cout << "User Input: ";
            cin >> choice;

            if (choice == "Bus" || choice == "bus")
            {
                system("CLS");
                TryAgain5:
                cout << "Welcome To Sofia's airport" << endl;
                cout << "Choose Your Next Destination:" << endl;
                cout << "Available: Finland" << endl;
                cout << "Locked: Ireland" << endl;
                cout << endl;

                cout << "User Input: ";
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
                    goto TryAgain5;
                }
            }
            else
            {
                cout << "Incorrect Input" << endl;
                system("pause");
                system("CLS");
                goto TryAgain4;
            }
        }
        else
        {
            cout << "Incorrect Input" << endl;
            system("pause");
            system("CLS");
            goto TryAgain2;
        }
    }
    else if (choice == "Explore" || choice == "explore")
    {
        TryAgain7:
        cout << "You have been exploring for 3 hours and found people that are going to take you to Sofia" << endl;
        cout << "Accept because this is your only way out of Burgas (Type: Yes)" << endl;

        cout << "User Input: ";
        cin >> choice;

        system("CLS");

        if (choice == "Yes" || choice == "yes")
        {
            TryAgain8:
            cout << "New Mission: Find a place to stay" << endl;
            cout << "Tip: Ask The people that you are going to be traveling with (Type: Ask)" << endl;

            cout << "User Input: ";
            cin >> choice;

            system("CLS");

            if (choice == "Ask" || choice == "ask")
            {
                TryAgain9:
                cout << "They have told you that There is a Hotel nearby called: Bulgaria" << endl;
                cout << "Suggestion:Go to Sofia (Type: Sofia)" << endl;

                cout << "User Input: ";
                cin >> choice;
                system("CLS");

                if (choice == "Sofia" || choice == "sofia")
                {
                    TryAgain10:
                    cout << "Welcome to the capital of Bulgaria Sofia" << endl;
                    cout << "Current location: National Palace of Culture (NDK)" << endl;
                    cout << endl;

                    cout << "New mission: Find a way to the airport and Go to Finland/Ireland!" << endl;
                    cout << endl;

                    cout << "Tip: Take a Taxi to the airport" << endl;

                    cout << "User Input: ";
                    cin >> choice;

                    system("CLS");

                    if (choice == "Taxi" || choice == "taxi")
                    {
                        system("CLS");
                        TryAgain11:
                        cout << "Welcome To Sofia's airport" << endl;
                        cout << "Choose Your Next Destination:" << endl;
                        cout << "Available: Finland" << endl;
                        cout << "Locked: Ireland" << endl;
                        cout << endl;

                        cout << "User Input: ";
                        cin >> choice;

                        if (choice == "Finland" || choice == "finland")
                        {
                            Finland();
                        }
                        else
                        {
                            cout << "Incorrect Input" << endl;
                            system("pause");
                            system("CLS");
                            goto TryAgain11;
                        }

                    }
                    else
                    {
                        cout << "Incorrect Input" << endl;
                        system("pause");
                        system("CLS");
                        goto TryAgain10;
                    }

                }
                else
                {
                    cout << "Incorrect Input" << endl;
                    system("pause");
                    system("CLS");
                    goto TryAgain9;
                }

            }
            else
            {
                cout << "Incorrect Input" << endl;
                system("pause");
                system("CLS");
                goto TryAgain8;
            }

        }
        else
        {
            cout << "Incorrect Input" << endl;
            system("pause");
            system("CLS");
            goto TryAgain7;
        }

    }
    else
    {
        cout << "Incorrect Input" << endl;
        system("pause");
        system("CLS");
        goto TryAgain;     
    }
}