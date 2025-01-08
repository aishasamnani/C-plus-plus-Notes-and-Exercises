// 03.04.01:
// Create a computer_trouble_shooting program that prompts the user if an ailing computer beeps on startup and if the hard drive spins. 
// If it beeps and the drive spins, print “Contact tech support”. 
// If it beeps and the drive does not spin, print “Check drive contacts”. 
// If it does not beep and the drive does not spin, print “Bring computer to repair center”. 
// Finally, if it does not beep and the drive spins, print “Check the speaker connections”.
// Organize your program into sections as per the Organization of Programs convention. 
// Include a header.
// Hint: Can use a table to organize the possibilities. 
// This would be written during the analysis part of writing programs.


// Name: Computer Troubleshooting
// Programmer: Aisha Samnani
// Date: January 6, 2025
// Description: This program determines what steps the user should take in order to troubleshoot their computer based on the information they input. 

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

  // Input and output statements
  if (beep == 'y') {
    if (hardDrive == 'y') {
      cout << "Contact tech support.\n";
    } else if (hardDrive == 'n') {
      cout << "Check drive contacts.\n";
    }
  } else if (beep == 'n') {
    if (hardDrive == 'y') {
      cout << "Check the speaker connections.\n";
    } else if (hardDrive == 'n') {
      cout << "Bring computer to repair center.";
    }
  }
  return 0;
}

// 03.04.02:
// A delivery service does not accept packages heavier than 27 kilograms or larger than 0.1 cubic meters (100, 000 cubic centimeters). 
// Create a package_check application that prompts the user for the weight of a package and its dimensions. 
// The program will check the conditions and print an appropriate message, for example, “package meets requirements”, “too large”, “too heavy” or both violation messages.

#include <iostream>
using namespace std;

int main() {
  int weight; 
  double volume;

  cout << "Enter the weight of the package (in kilograms): ";
  cin >> weight;
  cout << "Enter the volume of the package (in cubic centimetres): ";
  cin >> volume;

  if (weight <= 27) {
    if (volume <= 100000) {
      cout << "Package has acceptable measurements.";
    } else if (volume > 100000) {
      cout << "Package is too large.";
    }
  } else if (weight > 27) {
    if (volume <= 100000) {
      cout << "Package is too heavy.";
    } else if (volume > 100000) {
      cout << "Package is too large.";
      cout << "Package is too heavy.";
    }
  }
  return 0;
}

// 03.04.03:
// Modify 03.03.02 so that users can be designated a Prime user. 
// If the order is from a Prime user, and the order is for 900 copies or more, then they are entitled to a 10% discount on their final price

#include <iostream>
using namespace std;

int main() {
  double copies_499 = 0.30;
  double copies_749 = 0.28;
  double copies_999 = 0.27;
  double copiesOver_1000 = 0.25;
  double discount = 0.10;

  int copyQty;
  char primeUser;

  cout << "Enter number of copies to print: ";
  cin >> copyQty;
  cout << "Are you a prime user? (y/n): ";
  cin >> primeUser;

  if (copyQty <= 499) {
    double totalPrice = copyQty * copies_499;
    cout << "Price per copy: $" << copies_499 << "\nTotal price: $" << totalPrice;
  } else if (copyQty <= 749) {
    double totalPrice = copyQty * copies_749;
    cout << "Price per copy: $" << copies_749 << "\nTotal price: $" << totalPrice;
  } else if (copyQty <= 999) {
    double totalPrice = copyQty * copies_999;
    if (primeUser == 'y') {
      if (copyQty >= 900) {
        totalPrice = totalPrice - (totalPrice * discount);
      }
    }
    cout << "Price per copy: $" << copies_999 << "\nTotal price: $" << totalPrice;
  } else if (copyQty >= 1000) {
    double totalPrice = copyQty * copiesOver_1000;
    if (primeUser == 'y') {
      totalPrice = totalPrice - (totalPrice * discount);
    }
    cout << "Price per copy: $" << copiesOver_1000 << "\nTotal price: $" << totalPrice;
  } 
  
  return 0;   
}