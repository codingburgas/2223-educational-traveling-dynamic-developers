#pragma once
#include <iostream>
#include <Windows.h>

class PlayOption 
{	
	char finalChoice;

	public :
		void MainMenu();
		void Play();
		void Help();
		void Exit();
};
