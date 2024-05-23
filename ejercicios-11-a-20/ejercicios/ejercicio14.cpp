// Daniel Emiliano Lopez Aguilar
// Inverción de arreglo - 28/02/2024
// Ejercicio catorce
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int arreglo[]={10,20,30,40,50};
  int maximo = arreglo[0];
  int suma = 0;

  for (int i = 0; i < 5; i++)
  {
    suma+=arreglo[i];
    cout<<"arreglo en posicion"<<i<<" con valor de:"<<arreglo[i]<<endl;
  }
  cout<<"la suma de los elementos en el arreglo es de:"<<suma<<endl;
  return 0;
}
