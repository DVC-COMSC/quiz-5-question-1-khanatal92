#include    <iostream>
using namespace std;

int main() {
   int rows;

   // Ask user for input
   cout << "Enter the number of rows: ";
   cin >> rows;

   // Check if the input is valid
   if (rows <= 0) {
      cout << "Invalid input. Please enter a positive integer." << endl;
      return 1;
   }
  
   // Print the pattern
   for (int i = 1; i<= rows; ++i) {
      char letter = 'A';

   // Print letters for each row
   for (int j = 1; j <=i; ++j) {
      cout << letter << ' ';
      ++letter;
   }
   
   // Move to the next line after each row
   cout << endl;
}

   return 0;
   
}