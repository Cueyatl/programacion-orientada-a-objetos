//31 de enero
//Programa para calcular el area y perimetro de un Rectangulo
#include <iostream>
using namespace std;

int main(void){
  double longitud, anchura;
  cout<<"Programa para calcular el area y perimetro de un rectangulo"<<endl;
  cout<<"Ingrese la longitud del rectangulo: "<<endl;
  cin>>longitud;
  cout<<"Ingrese la anchura del rectangulo: ";
  cin>>anchura;
  cout<<"El area es: "<<anchura*longitud<<endl;
  cout<<"El perimetro es: "<<2*(longitud*anchura);

  return 0;
}