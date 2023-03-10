/*
This code reads an integer size and an array of size integers from standard input, sorts the array using the Insertion
Sort algorithm, and prints the sorted array. Here are the details:

The printArray() function prints an array of integers.
The main() function reads the input values for the array, prints the array before sorting, performs the insertion sort
algorithm, and prints the sorted array. The insertion sort algorithm starts from the second element of the array and
compares it with all the elements in the sorted sub-array. If the element is smaller than the key value, it is moved one
position ahead. This process is repeated until the key value is placed in its correct position in the sorted sub-array.
The function printArray() is called after each iteration of the insertion sort algorithm to print the array.
*/

#include <bits/stdc++.h>
using namespace std;

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    cout << array[i] << " ";
  }
  cout << endl;
}

int main() {
  int size;
  cin >> size;

  // Declare an integer array of given size
  int array[size];

  // Read the input values for the array
  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }

  // Print the input array
  cout << "Before Sorting : ";
  printArray(array, size);
  cout << endl;

  // Insertion Sort
  for (int i = 1; i < size; i++) {
    // Store the value of array[i] in key variable
    int key = array[i];

    // Initialize j with i-1, and move the elements of array[0...i-1], that are greater than key,
    // to one position ahead of their current position
    int j = i - 1;
    while (array[j] > key && j >= 0) {
      array[j + 1] = array[j];
      j--;
    }

    // Place the key value in its correct position in the sorted sub-array
    array[j + 1] = key;

    // Print the array after each iteration
    printArray(array, size);
  }

  // Print the sorted array
  cout << endl;
  cout << "After Sorting : ";
  printArray(array, size);
  cout << endl;

  return 0;
}
