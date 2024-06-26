#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void play_game()
{
	int random = rand() % 101;
	cout << "Game is being played.\n";
	
	cout << "Guess a number between 0 to 100 -- \n";
	

	
	while(true)
	{
		int guess;
		cin >> guess;
		
		if (guess == random)
		{
			cout << "Congratulations! You won the guess game,\n";
			break;
		}
		else if(guess > random)
		{
			cout << "Too high! Guess lower.\n";
			
		}
		else
		{
			cout << "Too low! Guess higher.\n";
		
		}	
	
	}
	
}

int main()
{
	srand(time(NULL));
	int choice;
	
	cout<< "Do you want to play a guess game?\n";
	cout<<"0.NO"<<endl<<"1.Yes"<<endl;
	cout<< "Choose 0 or 1 , to play the game--\n";
	cin >> choice;
	switch(choice)
	{
		case 0:
			cout<< "Have a good day then.\n";
			break;
		case 1:
			play_game();
			break;
	}
	return 0;	
}