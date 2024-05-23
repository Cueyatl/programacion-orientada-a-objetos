/*
Daniel Emiliano Lopez Aguilar -ejercicio 12.
2/27/24
Instrucciones
Elabora en c++ un programa con una arreglo simple
 que almacene 5 números cualesquiera e imprima en pantalla
 cuál de todos los números es el mayor.
*/
#include <iostream>
using namespace std;

int mayor(int *arreglo)
{
  int mayor = arreglo[0];
  int suma = 0;
  for (int i = 1; i < sizeof(arreglo); i++)
  {
    arreglo[i] > mayor ? mayor = arreglo[i] : mayor;
  }
  cout << "El numero mayor es " << mayor;
  return mayor;
}

int main(int argc, char const *argv[])
{
  int arreglo[] = {38, 69, 2, 45, 10};
  mayor(arreglo);
  return 0;
}

