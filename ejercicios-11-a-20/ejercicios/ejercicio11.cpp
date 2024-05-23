/*
Daniel Emiliano Lopez Aguilar - ejercicio 11.
2/27/2024
Instrucciones
Elabora un programa en c++ donde utilices un arreglo simple
 que almacene 5 números cualesquiera e imprima el resultado 
 de la suma de todos estos 5 números.
*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int arreglo[] = {10, 20, 30, 40, 50};
  int maximo = arreglo[0];
  int suma = 0;
  for (int i = 0; i < 5; i++)
  {
    suma += arreglo[i];
    cout << "arreglo en posicion" << i << " con valor de:" << arreglo[i] << endl;
  }
  cout << "la suma de los elementos en el arreglo es de:"
       << suma << endl;
  return 0;
}
