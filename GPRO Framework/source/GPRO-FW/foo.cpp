#include "GPRO-FW/fooHeader.h"

//definition for our function

// definition/implementation
void foo(int number)
{
	int guess = 0, play = 1;
	while (play == 1)
	{
		cout << "Guess what number I'm thinking of, it's between 1 and 10: ";
		cin >> guess;
		while (guess != number)
		{
			cout << "That's not the right number.\nGuess again: ";
			cin >> guess;
		}
		cout << "Correct! Play again? (yes = 1. no = 0): ";
		cin >> play;
	}
}