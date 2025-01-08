// 1) 
// Write a function to find the maximum of three numbers. 
// The function will have 3 parameters. 
// The three numbers will be supplied by user in the main body of the program.

#include <iostream>
using namespace std;

int max(int a, int b, int c) {
  if (a > b) {
    if (a > c) {
      return a;
    } else {
      return c;
    } 
  } else {
    if (b > c) {
      return b;
    } else {
      return c;
    }
  }
}

int main() {
  cout << max(1, 2, 3);
  return 0;
}

// 2) 
// Write a function that determines if a number is in the range of two other numbers.

#include <iostream>
using namespace std;

void numInRange(int largerNum, int smallerNum, int rangeNum) {
  if ((smallerNum <= rangeNum) && (rangeNum <= largerNum)) {
    cout << "Number is within range!";
  } else {
    cout << "Number is not within range";
  }
}

int main() {
  numInRange(5, 1, 3);
  return 0;
}

// 3) 
// Write a function that takes two parameters: 
// i) a phrase
// ii) a number
// The function will print out that phrase as many times as the number provided.

#include <iostream>
using namespace std;

void phraseOut(string phrase, int num) {
  for (int i = 0; i < num; ++i) {
    cout << phrase << "\n";
  }
}

int main() {
  phraseOut("Hello, my name is Monkey", 5);
  return 0;
}