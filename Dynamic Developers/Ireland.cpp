#include "Precompile.h"
#include "Game.h"

void Cork()
{	
	int choice;
	incorrectInput:
	cout << "You landed on the airport in Cork. Your goal is to reach Dublin and end your journey in Europe. \n";
	cout << "What would you like to do: \n";
	cout << "1. Go to the bus station and take the bus to Dublin\n";
	cout << "2. Go by the train\n";
	cout << "3. Explore the city and find somebody to take you there.\n";
	cin >> choice;
	system("cls");
	if (choice == 1)
	{
		incorrectInput1:
		cout << "You missed the bus! What are you going to do now:\n";
		cout << "1. Wait for the next bus\n";
		cout << "2. Go with the train\n";
		cin >> choice;
		system("cls");
		if (choice == 1)
		{
			cout << "You slept in the bus station for 8 hours and took your next bus.\n";
			cout << "Welcome to Dublin! Your journey ends here.\n";
		}
		else if (choice == 2)
		{
			goto choice2;
		}
		else
		{
			cout << "Incorrect input! Please try again!\n";
			system("pause");
			system("cls");
			goto incorrectInput1;
		}
	}
	else if (choice == 2)
	{
	choice2:
		cout << "You entered the train station. Chose wich train to take.\n";
		cout << "1. Fast train(Leaves in 20 minutes)\n";
		cout << "2. Take the luxury train(Leaves in 2 hours)\n";
		cin >> choice;
		system("cls");
		if (choice == 1)
		{
			cout << "You arrived after 3 hours and end your journey.\n";
		}
		else if (choice == 2)
		{
			cout << "You arrived after 6 hours. You enjoyed the beautiful views of ireland and left the country satisfied.\n";
		}
		else
		{
			cout << "Incorrect input! Please try again!\n";
			system("pause");
			system("cls");
			goto choice2;
		}


	}
	else if (choice == 3)
	{
	incorrectInput3:
		cout << "When you were walking down the city centre you saw a group of friends who were wearing merch from your favourite rock band. You decided to talk to them and they told you that they are going to Dublin.\n";
		cout << "What a coincidence! You told them that you are going to Dublin too!\n";
		cout << "They offered to take you with them. Do you accept?\n";
		cout << "1. Accept\n 2. Refuse";
		cin >> choice;
		system("cls");
		if (choice == 1)
		{
			cout << "You accepted the offer and joined them on their trip to Dublin. The whole trip was fun and you ejoyed every seccond of it.\n";
			cout << "They left you at the airport and said goodbye. You took the next flight to home and ended your journey!.\n";
		}
		else if (choice == 2)
		{
		incorrectInput4:
			cout << "You refused their offer and need to make a decision:\n";
			cout << "1. Take the bus";
			cout << "2. Go by the train";
			cin >> choice;
			system("cls");
			if (choice == 1)
			{
				goto incorrectInput1;
			}
			else if (choice == 2)
			{
				goto choice2;
			}
			else
			{
				cout << "Incorrect input! Please try again!\n";
				system("pause");
				system("cls");
				goto incorrectInput4;
			}
		}
		else
		{
			cout << "Incorrect input! Please try again!\n";
			system("pause");
			system("cls");
			goto incorrectInput3;
		}
	}
	else
	{
		cout << "Incorrect input! Please try again!\n";
		system("pause");
		system("cls");
		goto incorrectInput;
	}
}

void Ireland()
{
	Cork();
}