#include <iostream>
using namespace std;
int main() 
{
  int n;

  
  cout << "Enter a positive integer: ";
  cin >> n;

  
  int largestPrime = 1;

  
  for (int i = 2; i <= n; ++i) {
    bool isPrime = true;

    // Check for divisibility by 2 and 3
    if (i % 2 == 0 || i % 3 == 0) 
	 {
      isPrime = false;
    }  
	else
	 {
      // Check for divisibility by remaining odd numbers up to sqrt(i)
      for (int j = 5; j * j <= i; j += 6) {
        if (i % j == 0 || i % (j + 2) == 0) {
          isPrime = false;
          break;
        }
      }
    }

    // Update largest prime if current number is prime
    if (isPrime && i > largestPrime) {
      largestPrime = i;
    }
  }

  // Print the largest prime found
  cout << "The largest prime less than " << n << " is: " << largestPrime << std::endl;

  return 0;
}

