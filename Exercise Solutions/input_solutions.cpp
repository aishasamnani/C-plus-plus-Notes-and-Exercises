// 02.04.01
// Write a program, miniCalculator.py, that prompts for two integers, adds them, then subtracts the first number from the second, then prints out their sum and difference, in two separate messages. 
// Remember to write appropriate prompts and to comment.
// Hint: What is an appropriate base to use for the integers?

#include <iostream>
using namespace std;

int main() {
  int userNum1;
  int userNum2;
  cout << "Enter first number: ";
  cin >> userNum1;
  cout << "Enter second number: ";
  cin >> userNum2;

  int sum = userNum1 + userNum2;
  int diff = userNum2 - userNum1;

  cout << "Sum: " << sum << "\nDifference: " << diff;

  return 0;
}

// 02.04.02
// Write a program, scoreAverages.py, that prompts for three scores, then the name of a player.
// The program then calculates the average of the three scores and displays an appropriate message, for example:
// Bianca scored an average of 1.8 goals per game

#include <iostream>
#include <string>
using namespace std;

int main() {
  double score1;
  double score2;
  double score3;
  string userName;

  cout << "Enter first score: ";
  cin >> score1;

  cout << "Enter second score: ";
  cin >> score2;

  cout << "Enter thrid score: ";
  cin >> score3;

  cout << "Enter athlete name: ";
  cin >> userName;

  double average = (score1 + score2 + score3) / 3;
  cout << userName << " scored an average of " << average << " goals per game.";
  
  return 0;
}

// 02.04.03
// Write a program, numberSystems.py, that displays the name of the program, followed by a description of its operation. 
// The program will accept a base (eg 2, 7, etc).Then the program will accept a number in that base representation. The program will then display the number converted to denary.
// Allow for a blank lines for spacing, Allow for a space between prompts and where the cursor appears, while waiting for input.
// Example:
// Number Systems
// Convert to Base 10
// This program will accept a number in a non-base 10 representation, and convert it to its base 10 equivalent.
// Base 2
// Number 1001
// Number (denary) 9

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Number Systems\nConvert to Base 10\nThis system will take a non-base 10 number, and convert it to the equivalent base 10 number";

    int base;
    int num;

    cout << "\nEnter base: ";
    cin >> base;
    cout << "\nEnter number: ";
    cin >> num;

    int digit1 = num / 1000 % 10;
    int digit2 = num / 100 % 10;
    int digit3 = num / 10 % 10;
    int digit4 = num % 10;

    int numDenary = digit1 * pow(base, 3) + digit2 * pow(base, 2) + digit3 * pow(base, 1) + digit4 * pow(base, 0);

    cout << "\nDenary Number: " << numDenary;

    return 0;
}