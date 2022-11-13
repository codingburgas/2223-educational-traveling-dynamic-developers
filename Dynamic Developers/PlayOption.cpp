#include "PlayOption.h"


using namespace std;


void MainMenu()
{

	int playerChoice;

	cout << "Welcome to Euro Traveller - The Mini Game!\n\n\n";
	cout << "1. Play\n";
	cout << "2. Help\n";
	cout << "3. Exit\n";


	cout << "\nUser Input: ";
	cin >> playerChoice;
	if (playerChoice == 1)
	{
		Play();
	}
	else if (playerChoice == 2)
	{
		Help();
	}
	else if (playerChoice == 3)
	{
		Exit();
	}
}


void Play()
{
	cout << "\nYou chose to play!\n";
	cout << "Good Luck!\nGame loading....";
	Sleep(3200);
	system("cls");
	gameSetup();
}

void Help()
{
	cout << "You chose the help section!\n";
}

void Exit()
{
	char finalChoice;
	cout << "\nAre you sure you want to exit?\n";
	cout << "Type n to cancel || y to exit\n";
	
	cin >> finalChoice; 

	switch (finalChoice)
	{
	case 'y':
		cout << "Ok, program closing....";
		
		Sleep(2800);
		exit(0);

	case 'n':
		cout << "You want to continue? Sure thing....back to main menu";
		
		system("cls");
		MainMenu();

		break;
	default:
		cout << "Incorrect Input! Please try again!\n";
		
		int issueCounter = 1;
		
		do {
			cin >> finalChoice;

			if (finalChoice == 'y')
			{
				cout << "Finally, you made a decision!\nHave a nice day! Program closing....";
				Sleep(2800);
				exit(0);
			}
			else if(finalChoice == 'n')
			{
				cout << "Oh, so you don't want to quit? Oh well, back to menu....";
				Sleep(3200);
				system("cls");
				MainMenu();
				break;
			}
			else
			{
				issueCounter++;
				cout << "Try again!\n";
				cout << "You've tried: " << issueCounter << " times so far!\n";
			}
		} while (true);

		break;
	}
}