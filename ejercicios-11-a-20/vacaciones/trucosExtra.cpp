#include <iostream>

int triple(int &i) {

  i = i * 3;
  
  return i;

}

int main() {
  
  int num = 1;
  
  std::cout << triple(num) << "\n";
  std::cout << triple(num) << "\n";

  int power = 9000;
  
  // Create pointer
  int* ptr=nullptr;

  ptr = &power;
  
  // Print ptr
  std::cout << ptr << "\n";
  std::cout << *ptr << "\n";
int original=10;
  // Reference
int &reference = original;

// Pointer
int* pointer = &original;
}

