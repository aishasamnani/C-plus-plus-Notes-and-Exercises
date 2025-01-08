// 02.01.01
// Write a program that contains an array of 10 floating point numbers of your choosing. 
// The array will be initialized in the program. Have the program then print out each element of the array, one per line. 
// Use only 1 print statement ie do not have 10 separate print() statements.

#include <iostream>
#include <string>
using namespace std;

int main() {
  string animals[4] = {"Monkey", "Cat", "Rabbit", "Giraffe"};

  for (string animal : animals) {
    cout << animal << "\n";
  }
  return 0;
}

// 02.02.03
// Write a program that accepts user non-zero integers and stores the data in an array. 
// The program will stop accepting data when the user enters zero.
// The program will print out the array contents.

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int userNum;
  vector<int> numList;
  bool stop = false;
  
  while (stop == false) {
    cout << "Enter a number: ";
    cin >> userNum;
    if (userNum == 0) {
      for (int num : numList) {
        cout << num << "\n";
      }
      stop = true;
    } else {
      numList.push_back(userNum);
    }
  }
  return 0;
}

// 3) Write a grocery list program that uses a collection type to add and remove items that the user can input.

#include <iostream> 
#include <vector> 
#include <string>
#include <bits/stdc++.h> // to use the find() function
using namespace std;

int main() {
  vector<string> foods;
  string userFood;

  bool stop = false;
  while (stop == false) {
    cout << "Enter type of food for grocery list (enter 'stop' when done): ";
    cin >> userFood;
    if (userFood == "stop") {
      cout << "Which food do you want to remove?: ";
      cin >> userFood;

      foods.erase(find(foods.begin(), foods.end(), userFood));
      cout << "Final grocery list:\n";
      
      for (int i = 0; i < foods.size(); ++i) {
        cout << foods[i] << "\n";
      }
      stop = true;
    } else {
      foods.push_back(userFood);
    }
  }
  return 0;
}