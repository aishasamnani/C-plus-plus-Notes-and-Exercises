// 05.03.01
// Write a program that prints outs a word 5 times. But in between each of these lines, it prints out a second word 3 times in a sequence. 
// For example:
// Good 1
// Dog 1
// Dog 2
// Dog 3
// Good 2

#include <iostream>
using namespace std;

int main() {
  for (int outer = 1; outer < 6; ++outer) {
    cout << "Happy " << outer << "\n";
    for (int inner = 1; inner < 4; ++inner) {
      cout << "Birthday " << inner << "\n";
    }
  }
  return 0;
}

// 05.03.02
// Modify Example 3 so that it will prompt a user for a horizontal and vertical measure, and which prints out a rectangle of “*” to those dimensions.
// Exmaple 3:
// Try:
// Line1: for vertical in range(5):
// Line2: line = "" #Resets the line variable before the inner loop runs
// Line3: for horizontal in range(3):
// Line4: line = line + "*"
// Line5: print(line)
// The output of this code looks like a rectangle:

#include <iostream>
using namespace std;

int main() {
  int length, width;
  cout << "Enter length of rectangle: ";
  cin >> length;
  cout << "Enter width of rectangle: ";
  cin >> width;

  for (int vertical = 0; vertical < length; ++vertical) {
    for (int horizontal = 0; horizontal < width; ++horizontal) {
        cout << "*";
    }
    cout << "\n";
  }
  return 0;
}

// 05.03.03
// Write a program that counts how many ways 2 6-sided dice can add up to the numbers 3, 4, and 12.
// Order counts. 
// For example, in trying to add up to 8, the pairs 2,6 and 6,2 count as 2 ways, while 4, 4
// counts as 1 way. 
// Must display all the ways that add up to 3, 4, and 12.

#include <iostream>
using namespace std;

int main() {
  // ways to add up to 3
  for (int first = 1; first <= 6; ++first) {
    for (int second = 1; second <= 6; ++second) {
      if ((first + second) == 3) {
          cout << first << " " << second << "\n";
      }
    }
  }
  // ways to add up to 4
  for (int first = 1; first <= 6; ++first) {
    for (int second = 1; second <= 6; ++second) {
      if ((first + second) == 4) {
          cout << first << " " << second << "\n";
      }
    }
  }
  // ways to add up to 12
  for (int first = 1; first <= 6; ++first) {
    for (int second = 1; second <= 6; ++second) {
      if ((first + second) == 12) {
          cout << first << " " << second << "\n";
      }
    }
  }

  return 0;
}
