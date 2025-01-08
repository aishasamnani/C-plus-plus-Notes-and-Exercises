// 05.02.01
// Write a program that prompts the user for two numbers. The program will then print out all the numbers between these numbers, including the last number. 
// Assume the first number entered is larger than the second number.
// Advanced (optional): Enter 3 numbers, with the third number being a step to increment the printed numbers by. 
// For example, entering 2, 20, 5 means the program prints out 2, 7, 12 and 17 (the second number does not need to be printed out.). 
// Use the range parameter.

#include <iostream>
using namespace std;

int main() {
  int x;
  int y;

  cout << "Enter larger number: ";
  cin >> x;
  cout << "Enter smaller number: ";
  cin >> y;

  while (y <= x) {
    cout << y << "\n";
    ++y;
  }
  return 0;
}

// Advanced (optional):
int main() {
  int x;
  int y;
  int z;

  cout << "Enter larger number: ";
  cin >> x;
  cout << "Enter smaller number: ";
  cin >> y;
  cout << "How much should the number increment by?: ";
  cin >> z;

  while (y <= x) {
    cout << y << "\n";
    y = y + z;
  }
  return 0;
}

// 05.02.02
// Write a program that calculates the average of a set of numbers entered by the user. 
// The number of numbers that will be entered is unknown. 
// The user will indicate they are done entering numbers by entering zero.
// For example, a user could enter the set 2 5 12 6 0. 
// The program adds up 2 + 5 + 12 + 6 then divides the sum by 4.

#include <iostream>
using namespace std;

int main() {
  double x = 0.0;
  int counter = 0;
  bool stop = false;

  while (stop == false) {
    int number;
    cout << "Enter a number (Press 0 when done): ";
    cin >> number;

    x = x + number;
    ++counter;

    if (number == 0) {
      x = x / (counter - 1);
      cout << x;
      stop = true;
    }    
  }
  return 0;
}

// 05.02.03
// Write a Guessing Game program. 
// The program will generate a random number between 1 and 50, inclusive. 
// The user is to enter guesses of that number. 
// If the user’s guess is too high, print a message that says, “Too high”. 
// If the user’s guess is too low, print a message that says, “Too low”. 
// If the guess is correct, print a message that says, “You guessed correctly!”.

#include <iostream>
#include <cstdlib> // Library for rand() and srand()
#include <ctime>   // Library for time()
using namespace std;

int main() {
  srand(time(0)); // generate a new number each time program is run
  int randNum = rand() % 51; // random number between 0 and 51
  bool stop = false;

  while (stop == false) {
    int userGuess;
    cout << "Enter your guess of the number between 1 - 50 (inclusive): ";
    cin >> userGuess;

    if (userGuess > randNum) {
      cout << "Too high\n";
    } else if (userGuess < randNum) {
      cout << "Too low\n";
    } else if (userGuess == randNum) {
      cout << "You have guessed correctly!";
      stop = true;
    }
  }
  return 0;
}