#include "Precompile.h"
#include "Game.h"

/*struct passport
{
	string name;
	string surname;
	string age;
	string country;
	string city;
	string countriesVisited[50];
}Player;

void inputPassport()
{
	cout << "Please make your passport \n";
	cout << "Name: ";
	cin >> Player.name;
	cout << "Surname: ";
	cin >> Player.surname;
	cout << "Age: ";
	cin >> Player.age;
	cout << "Country: ";
	cin >> Player.country;
	cout << "City: ";
	cin >> Player.city;
}

void showPassport()
{
	cout << "Name: ";
	cout << Player.name << endl;
	cout << "Surname: ";
	cout << Player.surname << endl;
	cout << "Age: ";
	cout << Player.age << endl;
	cout << "Country: ";
	cout << Player.country << endl;
	cout << "City: ";
	cout << Player.city << endl;
}*/

void MainStory()
{
	char countryChoice;
	
	while (true)
	{
		cout << "Well, here you are, traveller! We've been waiting for you!\n";
		cout << "Your job is to travel across these 3 countries in Europe and explore the awesome world outside your own country!\n";
		cout << "First things first, are you ready to begin your journey?\n\n";
		cout << "Type n to cancel || type y to continue\n\n";
		cout << "Note: If you cancel you'll go back to the main menu!\n\n";
		cout << "Your choice: ";

		cin >> countryChoice;

		if (countryChoice == 'n' || countryChoice == 'y')
		{
			if (countryChoice == 'y')
			{
				cout << "So you are ready? Let's go!\n";

				system("Pause");
				system("cls");
				break;
			}
			else
			{
				cout << "You canceled! Back to main menu!\n";
				system("Pause");
				system("cls");
				MainMenu();
			}
		}
		else
		{
			cout << "\nWhat did you do wrong?\n\n";
			cout << "Please try again!\n";
			system("pause");
			system("cls");
		}
	}
	//Sleep(3000);
}

void gameSetup()
{
	//inputPassport();
	MainStory();
	Bulgaria();
	Finland();
	Ireland();
	EndCredits();
}