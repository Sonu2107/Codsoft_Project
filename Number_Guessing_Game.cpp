#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
srand(time(0)); 

int targetNumber = rand() % 100 + 1; 
int guess;
int numberOfGuesses = 0;

cout << "Welcome to the Guessing Number Game!" << endl;
cout << "I have selected a number between 1 and 100. Try to guess it." << endl;

while (true) {
cout << "Enter your guess: ";
cin >> guess;
numberOfGuesses++;

if (guess < targetNumber) {
cout << "Too low! Try again." << endl;
} else if (guess > targetNumber) {
cout << "Too high! Try again." << endl;
} else {
cout << "Congratulations! You guessed the number in " << numberOfGuesses << " guesses." << endl;
break;
}
}

return 0;
}