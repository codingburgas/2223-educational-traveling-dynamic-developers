#include "Precompile.h"
#include "PlayOption.h"

void MainMenu()
{

	string playerChoice;

	incorrect:			//return to beginning of function

	cout << "Welcome to Euro Traveller - The Mini Game!\n\n\n";
	cout << "1. Play\n";
	cout << "2. Help\n";
	cout << "3. Exit\n";


	cout << "\nUser Input: ";
	cin >> playerChoice;

	if (playerChoice == "1")
	{
		Play();
	}
	else if (playerChoice == "2")
	{
		Help();
	}
	else if (playerChoice == "3")
	{
		Exit();
	}
	else
	{
		cout << "Incorrect Input! "  << "Please try again!\n";
		system("pause");
		system("cls");
		goto incorrect;
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
	system("cls");
	char playerChoiceHelpSection;
incorrectInputHelp:
	
	cout << "You chose the help section!\n";
	cout << "During gameplay you can use this command (some may be added in the future and may be added here aswell)! :D\n\n";
	cout << "Here's the command list:\n";
	cout << "/exit - You instantly close the game\n";
	cout << "Note: This command CANNOT be used in main menu nor in the help section!\n";

	cout << "\nWhere do you want to go next?\n";
	cout << "1. Main menu\n";
	cout << "2. Exit\n\n";
	cout << "User Input: ";
	
	cin >> playerChoiceHelpSection;

	switch (playerChoiceHelpSection)
	{
	case '1':
		cout << "\n\nBack to main menu...";
		Sleep(2400);
		system("cls");
		MainMenu();
		break;
	case'2':
		char confirmChoice;
		
		cout << "You want to quit already?\n\n";
		cout << "Type n to cancel || y to exit game\n";
		
		cout << "User Input: ";
		while (true)
		{
			cin >> confirmChoice;
			if (confirmChoice == 'n')
			{
				Help();
				break;
			}
			else if (confirmChoice == 'y')
			{
				cout << "Quiting game...";
				Sleep(2000);
				exit(0);
			}
			else
			{
				cout << "Incorrect Input!" << endl << "Please try again!\n";
			}
		}

		break;
	default:
		cout << "Incorrect Input! "  << "Please try again!\n";
		system("pause");
		system("cls");
		goto incorrectInputHelp;
		break;
	}
}

void Exit()
{
	char finalChoice;

	incorrectExit:

	cout << "Are you sure you want to exit?\n";
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
		Sleep(3000);
		system("cls");
		MainMenu();

		break;
	default:
		cout << "Incorrect Input! Please try again!\n";
		
		system("pause");
		system("cls");
		
		goto incorrectExit;	
		break;
	}
}