#include "Precompile.h"
#include "Game.h"

void Finland()
{
	system("cls");
	cout << "Well, there you are, traveller! You are now in one of the coolest countries in Europe!\n";
	cout << "But first, you should be aware that you have start and go somewhere, right?\n";
	system("pause");

	Rovaniemi();
	Tampere();
	Helsinki();
}

void Rovaniemi()
{
	system("cls");
	
	char choice;

	cout << "Well, well, looks like someone finally showed up....\n";
	cout << "Your journey starts here, at Rovaniemi!\n";
	cout << "A beautiful place where the nature is either covered in snow or is so green like you've never seen before!\n";
	cout << "You are now in the city centre and have to find the nearest train station in order to hop on the train and then of you go to the next city.\n";

	system("pause");
	system("cls");

	cout << "So now you are headed towards the train station....\n";
	cout << "Heading now....\n";
	system("pause");
	system("cls");

	cout << "You finally arrived at the place. The next train comes in 10 minutes. Now you wait for it to arrive.\n";
	cout << "After some time...\n";
	system("pause");
	
	while (true)
	{
		system("cls");
		cout << "Now you have to make a choice: 1. Wait for the train  ||  2. Go for a walk\n";
		cout << "User Input: ";
		cin >> choice;

		if (choice != '1' && choice != '2')
		{
			cout << "Incorrect Input! Please try again!\n";
			system("pause");
		}
		else
		{
			break;
		}
	}
	system("cls");

	if (choice == '1')
	{
		cout << "You chose to wait for the train!\n";
		cout << "After 10 long minutes....\n";
		system("pause");
		system("cls");

		cout << "You caught the train! Well done!\n";
		cout << "Travelling to the next city - Tampere....\n";
	}
	else
	{
		cout << "You are walking now aimlessly through the city....\n";
		cout << "You see a stranger offering a ride to Tampere (your next city).\n"; 
		cout << "He has a bus....\n";
		cout << "You have no other option so you talk to him and pay him for the ride.\n";
		cout << "You are now travelling through the coutryside and you enjoy the ride.....\n";
	}
	system("pause");
	system("cls");
}

void Tampere()
{
	cout << "There you are! You have arrived at Tampere!\n";
	cout << "You are now in front of the train station. You look around a bit...\n";
	system("pause");
	system("cls");

	cout << "You see a local job offer!\n";
	cout << "As you get closer you notice that it is about truck driving!\n";
	cout << "And since in Finland the truckers' job is insanely hard you have to at least help somehow, you know.....\n";
	cout << "And surprise, surprise....What do you do?\n";
	cout << "You have no other option except calling for the job!\n";
	system("pause");
	system("cls");

	cout << "But there is a catch! You don't speak Finnish!\n";
	cout << "Fortunately, the locals do speak English!\n";
	cout << "You're now hired as a temporary driver!\n";
	cout << "That is because one of the company's employees is sick and you only have to go to...guess where....\n";
	cout << "Helsinki! Your next destination!\n";
	system("pause");
	system("cls");

	cout << "You now go to the company's headquarter!\n";
	cout << "You meet your boss and he tells you that everything is good to go!\n";
	cout << "Only thing left to do here is....To drive that truck!\n";
	cout << "You hop in, start it, and floor it 'till the next and final city - Helsinki!\n\n";
	cout << "Now you are travelling....\n";
	system("pause");
	system("cls");
}

void Helsinki()
{
	cout << "Good job! You have arrived safely!\n";
	cout << "Earlier you were instructed that you must leave the truck next to the airport.\n";
	cout << "So you go there....\n";
	cout << "You park, talked to your now ex boss and head straight towards the airport!\n";
	system("pause");
	system("cls");

	cout << "You get in and see that the furthest flight is to Ireland!\n";
	cout << "And as you've always wanted to go there, you go and without even thinking, buying the ticket!\n";
	system("pause");
	system("cls");

	cout << "Some time has passed and now you are getting on the plane!\n";
	cout << "You may have noticed, traveller, that it has never got dark?\n";
	cout << "And you know why? Because here, in Finland, it is always bright at night!\n";
	cout << "And also....You haven't slept!\n";
	cout << "So now it is the perfect opportunity to take a rest.....during the flight I mean! :D\n";
	system("pause");
	system("cls");

	cout << "The plane takes off and you go to Ireland!\n";
	system("pause");
	system("cls");
}