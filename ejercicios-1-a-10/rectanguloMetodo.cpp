//2 de febrero del 2024; DELA
#include <iostream>
using namespace std;

double area(double longitud,double anchura){
  return longitud*anchura;
}
double perimetro(double longitud, double anchura){
  return 2*(longitud+anchura);
}

int main(int argc, char const *argv[])
{
  

  double longitud;
  double anchura;
  cout<<"Programa para calcular el area y perimetro de un rectangulo usando metodos."<<endl;
  cout<<"Ingrese la longitud del rectangulo: "<<endl;
  cin>>longitud;
  cout << "Ingrese la anchura del rectagulo: "<<endl; 
  cin>>anchura;
  cout<<"El area es: "<<area(longitud, anchura)<<endl;
  cout<<"El perimetro es: "<<perimetro(longitud, anchura)<<endl;

  return 0;
}
