// Declare a variable for the following datatypes and assign each a value:
// string, char, float/double, boolean, integer
// Output the variables

#include <iostream>
#include <string>
using namespace std;

int main() {
    int intVar = 10;
    double floatVar = 3.14;
    char charVar = 'A';
    bool boolVar = true;

    cout << "Integer: " << intVar << "\n";
    cout << "Double/Float: " << floatVar << "\n";
    cout << "Character: " << charVar << "\n";
    cout << "Boolean: " << boolVar << "\n";

    return 0;
}

// 02.03.03 Variable message
// Write a program that displays the following message:
// My favourite animal is the _______ because they are _______
// Where you create a variable that contains the name of an animal, and a second variable with a trait of that animal and use those variables in a print statement to output the above message.
// Then change the contents of the two variables and print the new message.

#include <iostream>
#include <string>
using namespace std;

int main() {
  string favAnimal = "dolphin";
  string animalTrait = "intelligent";
  cout << "My favorite animal is the " << favAnimal << " because they are " << animalTrait;

  favAnimal = "giraffe";
  animalTrait = "tall";
  cout << "\nMy favorite animal is the " << favAnimal << " because they are " << animalTrait;
  
  return 0;
}

// 02.03.02 Calculating costs
// Write a program that calculates the total price of a purchase using the following formula:
// Total price = price + sales tax, where sales tax is 13% of the initial price
// Use appropriate variables and constant(s) for:
// total price
// price
// sales tax
// Calculate and display the total price for two purchases: i) $5, ii) $25.00
  
// i) $5
#include <iostream>
using namespace std;

int main() {
  int itemPrice = 5;
  double taxRate = (13.0/100);
  double salesTax = (itemPrice * taxRate);
  double totalPrice = (itemPrice + salesTax);
  cout << "Total price: $" << totalPrice;

  return 0;
}


// ii) $25.00
#include <iostream>
using namespace std;

int main() {
  double itemPrice = 25.00;
  double taxRate = (13.0/100);
  double salesTax = (itemPrice * taxRate);
  double totalPrice = (itemPrice + salesTax);
  cout << "Total price: $" << totalPrice;

  return 0;
}
