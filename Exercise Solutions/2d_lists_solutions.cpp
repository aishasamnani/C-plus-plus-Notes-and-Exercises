// 1) Create a 2D list populated with string values and print out elements in the same sublist on one line.

#include<iostream>
using namespace std; 

int main() {  
   string arr[4][2] = {
      {"Hello", "World"},
      {"Bye", "Friend"},
      {"Go", "Sleep"},
      {"The", "Dog"}
      };

   int i;
   int j;
   
   for (i = 0; i < 4; ++i) {
      for (j = 0; j < 2; ++j) {
         if (j % 2 == 0) {
            cout << arr[i][j] << " ";;
         } else {
            cout << arr[i][j] << "\n";
         }
      }
      cout << "\n";
   }
}

// 2) Create a 2 dimensional list poulated with numbers
// Print the original list in the format of a grid 
// Remove the last sub-list from the main list
// Re-print the updated list

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> numVect = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "Original 2D vector:" << "\n";
    
    for (int i = 0; i < numVect.size(); ++i) {
        for (int j = 0; j < numVect[i].size(); ++j) {
            cout << numVect[i][j] << " ";
        }
        cout << "\n";
    }

    if (!numVect.empty()) {
        numVect.pop_back();
    }

    cout << "\nUpdated 2D vector (removed the last sub-vector):" << "\n";
    
    for (int i = 0; i < numVect.size(); ++i) {
        for (int j = 0; j < numVect[i].size(); ++j) {
            cout << numVect[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// 3) Create a 2 dimensional list poulated with numbers
// Find the sum of each column in the 2D grid
// Output the sum of each column

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> numVect = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    for (int i = 0; i < numVect[0].size(); ++i) {
        int sunColumn = 0;
        for (int j = 0; j < numVect.size(); ++j) {
            sunColumn += numVect[j][i];
        }
        cout << "Column " << i + 1 << ": " << sunColumn << "\n";
    }
    return 0;
}