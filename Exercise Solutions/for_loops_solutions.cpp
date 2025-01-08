// 05.01.01
// Write a program that has starts with a number and subtracts 20 from it 3 times. 
// Your program receives the starting number as input. 
// Print out the result.

#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter Starting number: ";
  cin >> number;

  for (int i = 0; i <3; i++) {
    number = number - 20;
  }

  cout << number;
  
  return 0; 
}

// 05.01.02
// Write a program that accepts as input, 4 numbers, then displays the result of multiplying the 4 numbers together.
// Note: Decide what statements can be repeated, and what are the initial conditions, and any end calculations. 
// Do not use 4 separate variables to hold the 4 values.

#include <iostream>
using namespace std;

int main() {
  int number;
  cout << "Enter a number: ";
  cin >> number;

  int ans = number;

  for (int i = 0; i < 2; ++i) {
    cout << "Enter a number: ";
    cin >> number;
    ans = ans * number;
  }
  cout << ans;
  return 0;
}

// 05.01.03
// Write a program that prints out all the odd numbers between 0 and 20. 

#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 20; ++i) {
    if ((i % 2) == 0) {
      continue;
    } else {
      cout << i << "\n";
    }
  }
  return 0;
}