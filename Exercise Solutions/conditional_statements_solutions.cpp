// 03.01.03:
// Create a program that accepts a number from the user, prints a message saying, “Checking if # is greater than 10”, and prints a “success” message if the number is greater than 10. 
// Print a “Done checking” message after the check is done. (No message is expected if it fails).
// Remember to use variables, and to organize the code into Input, Processing and Output sections.

#include <iostream>
using namespace std;

int main() {
  // Input
  int number;
  cout << "Enter a number greater than 10: ";
  cin >> number;

  // Processing 
  cout << "\nChecking if number is greater than 10...";

  if (number > 10) {
    // Output
    cout << "\nsuccess";
  }
  cout << "\nDone checking";
}

// 03.01.01 :
// You walk into a theatre, look at the movies listed. You only want to see the Frozen II. If it is showing, print a message to buy a ticket. If it is not showing, print a message to leave the theatre.
// Write the program so that Frozen II is showing, then run it.
// Edit the program so that Frozen II is not showing, then run it. 
// Ensure that you are able to get both messages to appear (1 message for each execution – never both messages at once).
// (Note: You do not have to detail the ticket buying steps).

#include <iostream>
using namespace std;

// Frozen is showing:
int main() {
  bool frozenShow = true;
  if (frozenShow == true) {
    cout << "Buy a ticket.";
  } else {
    cout << "Leave the theatre.";
  }
  return 0;
}

// Frozen is not showing:
int main() {
  bool frozenShow = false;
  if (frozenShow == true) {
    cout << "Buy a ticket.";
  } else {
    cout << "Leave the theatre.";
  }
  return 0;
}

// Exercise 03.03.03:
// Create a grades program that allows the user to enter a letter grade (A, B, C, D or E), which then displays the range of marks associated with that letter. 
// Use the following range:
// A 80 – 100
// B 70 – 79
// C 60 – 69
// D 50 – 59
// E 0 – 49
// If the user enters anything else, an error message should appear, for example, “Invalid letter grade”.

#include <iostream>
using namespace std;

int main() {
  char userGrade;
  cout << "Enter your grade (letters only!): ";
  cin >> userGrade;

  if (userGrade == 'A') {
    cout << "Grade: A, Range: 80-100";
  } else if (userGrade == 'B') {
    cout << "Grade: B, Range: 70 - 79";
  } else if (userGrade == 'C') {
    cout << "Grade: C, Range: 60 - 69";
  } else if (userGrade == 'D') {
    cout << "Grade: D, Range: 50 - 59";
  } else if (userGrade == 'E') {
    cout << "Grade: E, Range: 0 - 49";
  } else {
    cout << "Invalid letter grade entered.";
  }
  return 0;
}

