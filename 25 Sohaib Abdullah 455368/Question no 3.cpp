#include <iostream>
using namespace std;
int main() {
  
  int a[5] = {1, 2, 3, 4, 5};

  // New array of size 10
  int b[10] = {0}; 

  // Copy elements from a to b
  for (int i = 0; i < 5; ++i) {
    b[i] = a[i];
  }

  // Add new elements to b
  b[5] = 6;
  b[6] = 7;

  
  for (int i = 0; i < 10; ++i) {
    std::cout << b[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}

