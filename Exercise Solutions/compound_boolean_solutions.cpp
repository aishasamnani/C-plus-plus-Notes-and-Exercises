// 03.06.03:
// Rewrite exercise 3.04.01 replacing the nested “if”s with compound Boolean expressions.

#include <iostream>
using namespace std;

int main() {
  // Define and initialize variables
  char beep;
  char hardDrive;

  // Get information for hard drive and beep noises
  cout << "Does the computer beep on startup? (y/n): ";
  cin >> beep;
  cout << "Is the hard drive spinning? (y/n): ";
  cin >> hardDrive;

  //Input and output statements
  if ((beep == 'y') && (hardDrive == 'y')) {
    cout << "Contact tech support.";
  } else if ((beep == 'y') && (hardDrive == 'n')) {
    cout << "Check drive contacts.";
  } else if ((beep == 'n') && (hardDrive == 'y')) {
    cout << "Check the speaker connections.";
  } else if ((beep == 'n') && (hardDrive == 'n')) {
    cout << "Bring computer to repair center.";
  }
  return 0;
}

// 03.06.04:
// Write a program number_sorter that accepts a number between 1 and 100, inclusive, and which distinguishes number by the following criteria, to be testing in order:
// a) number is divisible by 10, print a message stating “Criteria A”
// b) number is divisible by 5 or is strictly less than 40, print “Criteria B”
// c) number is less strictly less than 60, print “Criteria C”
// d) otherwise, print “Does not match any Criteria”
// Use only 1 “if…elif” statement and compound Boolean expressions

#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter a number from 1 - 100 (inclusive): ";
  cin >> number;

  if ((number % 10) == 0) {
    cout << "Criteria A";
  } else if (((number % 5) == 0) || (number < 40)) {
    cout << "Criteria B";
  } else if (number < 60) {
    cout << "Criteria C";
  } else if (number >= 60) {
    cout << "Does not match any Criteria";
  }
  return 0;  
}

// 03.06.05:
// Write a program for the College of Pokemon Trainers that calculates the admission fee for Prospective Trainers (PTs), based on a number of factors. 
// PTs must 16 years old or older. 
// PTs are rated according to their experience using the codes N, E and M, respectively, for New, Experienced and Master level experience. 
// The program will determine the admission fee charged to PTs according to a given table
// Use compound boolean expressions.
// Any age less than 16 should result in a message indicating the applicant is ineligible for the program.

#include <iostream>
using namespace std;

int main() {
  int age;
  char experience;

  cout << "Enter your age: ";
  cin >> age;
  cout << "What is your level of experience? (N - New, E - Experienced, M - Master): ";
  cin >> experience;

  if (age < 16) {
    cout << "Applicant ineligible for program";
  } else if ((age <= 25) && (experience == 'N')) {
    cout << "Admission fee: $2.00";
  } else if ((age <= 25) && (experience == 'E')) {
    cout << "Admission fee: $1.50";
  } else if ((age <= 25) && (experience == 'M')) {
    cout << "Admission fee: $1.00";
  } else if ((age <= 60) && (experience == 'N')) {
    cout << "Admission fee: $1.50";
  } else if ((age <= 60) && (experience == 'E')) {
    cout << "Admission fee: $1.00";
  } else if ((age <= 60) && (experience == 'M')) {
    cout << "Admission fee: $0.75";
  } else if ((age > 60) && (experience == 'N')) {
    cout << "Admission fee: $0.90";
  } else if ((age > 60) && ((experience == 'E') || (experience == 'M'))) {
    cout << "Admission fee: $0.75";
  }
  return 0; 
}