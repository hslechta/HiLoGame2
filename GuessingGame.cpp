/*
 * GuessingGame.cpp
 *
 *  Created on: Aug 19, 2022
 *      Author: HMS
 */

#include <iostream>
using namespace std;

int main() {
  int ran;
  int input = -2;
  int guess = 0;

  srand(time(NULL));

  ran = rand() % 101;

  cout << "Enter a number between 0 and 100: " << endl;

  do {
	if (!(cin >> input)) {
		cout << "You entered a non-numeric." << endl;
		cin.clear();
		cin.ignore();
		cout << "Please enter a number between 0 and 100: " << endl;
	}
	else if (input < 0 || input > 100) {
		cout << "Please enter a number between 0 and 100: " << endl;
	}
	else if (input < ran) {
		cout << "Too low, try again: " << endl;
	}
	else if (input > ran) {
		cout << "Too high, try again: " << endl;
	}
	guess++;
  } while (input != ran);

  cout << "Congratulations! You win!" << endl;
  cout << "It took you " << guess << " guesses to find the number.";
}
