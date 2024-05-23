// Daniel Emiliano Lopez Aguilar
// Promedio - 28/02/2024
// Ejercicio trece
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int arreglo[] = {10, 20, 30, 40, 50};

  double promedio;
  double sum = 0.0;
  int size = sizeof(arreglo) / sizeof(arreglo[0]);
  
  for (int i = 0; i < size; ++i)
  {
    sum += arreglo[i];
  }
  promedio = sum / static_cast<double>(size);
  std::cout << "El promedio es " << promedio << endl;

  
  return 0;
}
