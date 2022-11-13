#include <iostream>
#include "PlayOption.h"

using namespace std;

void MainStory()
{
	cout << "Well, here you are, traveller! We've been waiting for you!\n";
	cout << "Your job is to travel across 5 countries in Europe and explore the awesome world outside your own country.\n";
	cout << "First things first, you must choose your starting country!\n\n";
	
	char countryChoice; unsigned short int mistakeCounter = 0; string countryList[3] = {"Bulgaria", "Finnland", "Ireland"};

	cout << "So let's see the options: ";
	cout << "1. Bulgaria 2. Finnland 3. Ireland\n";
	
	while (true)
	{
		cout << "Your choice: ";
		cin >> countryChoice;

		if (countryChoice >= '1' && countryChoice <= '3')
		{
			if (countryChoice == '1')
			{
				cout << "Your choice: " << countryList[0] << endl;
				cout << "Ahh, you chose our own country, we're pleased\n";
			}
			else if (countryChoice == '2')
			{
				cout << "Your choice: " << countryList[1] << endl;
				cout << "Ahh, you chose the country of sisu and kilju.....What a surprise...\n";
				cout << "Oh, I mean good choice! :D\n";
			}
			else
			{
				cout << "Your choice: " << countryList[2] << endl;
				cout << "Not the best choice but nevertheless you are not going to regret your decision!:D\n";
			}
			break;
		}
		else
		{
			mistakeCounter++;
			if (mistakeCounter == 5)
			{
				cout << "You've made "<< mistakeCounter << " mistakes so far....Please don't do it again!\n\n";
			}
			if (mistakeCounter == 10)
			{
				cout << "You've done this " << mistakeCounter << " times so far....Last warning!\n\n";
			}
			if (mistakeCounter == 15)
			{
				cout << "\nWe've warned you and you didn't listen!\n";
				cout << "You've done this " << mistakeCounter << " times already!....That's it! You are done!\n\n";
				cout << "Game shutting down....";
				Sleep(2500);
				exit(0);
			}
			
			cout << "What did you do wrong?\n\n";
			cout << "Please try again!\n";
		}
	}
	Sleep(3000);


}
void gameStart()
{
	cout << "game";
}
void gameSetup()
{
	MainStory();
	gameStart();
}