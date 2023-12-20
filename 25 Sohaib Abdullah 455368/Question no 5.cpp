#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n) 
{
  bool swapped = true; 
  int temp;

  
  for (int i = 0; i < n - 1; ++i) {
    swapped = false; 

    // Compare adjacent elements and swap if needed
    for (int j = 0; j < n - i - 1; ++j) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        swapped = true; 
      }
    }

    
    if (!swapped) {
      break; // Early exit if already sorted
    }
  }
}

void printArray(int arr[], int n) 
{
  cout << "Sorted array: ";
  for (int i = 0; i < n; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() 
{
  int arr[6]; // Declare array of size 6

  // Get user input for each element
  cout << "Enter 6 integers: ";
  for (int i = 0; i < 6; ++i)
   {
    cin >> arr[i];
  }

  // Sort the array
  bubbleSort(arr, 6);

  // Print the sorted array
  printArray(arr, 6);

  return 0;
}

