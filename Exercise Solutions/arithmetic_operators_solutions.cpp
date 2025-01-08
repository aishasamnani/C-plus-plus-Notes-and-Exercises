// 02.02.01
// Convert the following mathematical expressions into Python code, one expression per line.
// Remember to write the expression within a print() function.
// For example, print ( 1+1). Save this 6-lines program in a file, and name it 02.02.01
// Arithmetic.py and save it in your save folder on your USB drive.
// a) 2 multiplied by 3
// b) 2 + 3 x 5
// c) (2 + 13) / 5
// d) 2^5
// e) 7/3 – 1
// f) (7 – 12) / (6 – 1)

#include <iostream>
#include <cmath> // for exponents
using namespace std;

int main() {
  cout << 2*3 << "\n";
  cout << 2 + 3 * 5 << "\n";
  cout << (2 + 13) / 5 << "\n";
  cout << pow(2, 5) << "\n"; // pow(base, exponent)
  cout << 7/3 - 1 << "\n";
  cout << (7 - 12) / (6 - 1) << "\n";

  return 0;
}

// 02.02.02
// Create a geometry program Circumference.py that prints the circumference (2(pi)r) of a circle with radius 15 cm. Use the value 3.14 for pi. Verify your program’s calculation manually.
// i) Write a program that just displays the calculated answer.
// ii) Modify the program so that the answer is printed as:
// “The circumference is XX cm”, where XX is the calculated answer.

#include <iostream>
using namespace std;

int main() {
  double pi = 3.14;
  int radius = 15;
  double circumference = 2*pi*radius;
  cout << "The circumference is " << circumference << " cm.";
  
  return 0;
}


// 02.02.03:
// Create a LongJumpAverage.py application that calculates and displays the average jump length of an athlete whose jumps were 3.3 m. 4.0 m and 3.0 m.

#include <iostream>
using namespace std;

int main() {
  double jump1 = 3.3;
  double jump2 = 4.0;
  double jump3 = 3.0;
  double average = (jump1 + jump2 + jump3) / 3;
  cout << "The average jump of the athlete is " << average << "m.";

  return 0;
}