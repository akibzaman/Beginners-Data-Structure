/*
This program takes the user input for the dimensions of a 2D array, then prompts the user to enter the elements of the
array. After the array is filled, the program passes the array to a function called printArray, which prints the
contents of the array to the console.

The printArray function takes three arguments: a pointer to the beginning of the array, the number of rows in the array,
and the number of columns in the array. It then loops through each row and column of the array, printing the contents of
each element to the console. The function uses pointer arithmetic to access the elements of the array.

Note that the use of #include <bits/stdc++.h> is generally discouraged in production code, as it includes many headers
that are not needed and can lead to longer compile times. It is better to include only the necessary headers for the
specific functionality required in the program.
*/

#include <bits/stdc++.h>

using namespace std;

// Function to print a 2D array
void printArray(int *array, int row, int col) {
  // Loop through each row
  for (int i = 0; i < row; i++) {
    // Loop through each column
    for (int j = 0; j < col; j++) {
      // Print the element at row i, column j
      cout << *((array + i * col) + j) << " ";
    }
    // Print a newline character after each row is printed
    cout << endl;
  }

  // Print an additional newline character after the entire array is printed
  cout << endl;
}

int main() {
  int row, col;

  // Prompt the user to enter the dimensions of the array
  cin >> row >> col;

  // Declare a 2D array with the given dimensions
  int array[row][col];

  // Loop through each row and column, and prompt the user to enter the corresponding element
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cin >> array[i][j];
    }
  }

  // Pass the array to the printArray function and print the contents of the array
  printArray(*array, row, col);

  // Exit the program with status code 0
  return 0;
}
