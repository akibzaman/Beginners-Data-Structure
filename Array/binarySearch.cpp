/*
This program performs a binary search on a user-defined array of integers to find a specific value. The program prompts
the user to enter the size of the array and then prompts the user to enter the elements of the array. It then prompts
the user to enter the value to search for, and calls the binarySearch function to find the index of the search value in
the array.

The binarySearch function takes four arguments: an array of integers, the value to search for, the lower bound of the
current range being searched, and the upper bound of the current range being searched. The function recursively searches
the current range of the array for the search value by dividing the range in half at each iteration, and checking if the
midpoint contains the search value. If the search value is not found, the function returns -1.

Note that the use of #include <bits/stdc++.h> is generally discouraged in production code, as it includes many headers
that are not needed and can lead to longer compile times. It is better to include only the necessary headers for the
specific functionality required in the program.
*/

#include <bits/stdc++.h>
using namespace std;

// Function to perform binary search on an array
int binarySearch(int array[], int x, int lb, int ub) {
  // Check if the lower bound is less than or equal to the upper bound
  if (lb <= ub) {
    // Calculate the midpoint of the current range
    int mid = (lb + ub) / 2;

    // If the midpoint contains the search value, return the index
    if (x == array[mid]) return mid;  // Centre

    // If the search value is greater than the midpoint, search the right half of the array
    else if (x > array[mid])
      binarySearch(array, x, mid + 1, ub);  // Right

    // If the search value is less than the midpoint, search the left half of the array
    else
      binarySearch(array, x, lb, mid - 1);  // Left
  }
  // If the search value is not found, return -1
  else
    return -1;
}

int main() {
  int size;

  // Prompt the user to enter the size of the array
  cin >> size;

  // Declare an array of the given size
  int array[size];

  // Prompt the user to enter the elements of the array
  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }

  // Prompt the user to enter the value to search for
  int checkValue;
  cout << "Please Enter the Value You want to Search: ";
  cin >> checkValue;

  // Call the binarySearch function to find the index of the search value in the array
  int indexNumber;
  indexNumber = binarySearch(array, checkValue, 0, size - 1);

  // If the search value is found, print the index and position of the value
  if (indexNumber != -1) {
    cout << "Index No: " << indexNumber << " Position No: " << indexNumber + 1 << endl;
  }
  // If the search value is not found, print a message indicating that it was not found
  else {
    cout << " Not Found";
  }

  // Exit the program with status code 0
  return 0;
}
