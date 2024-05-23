//Autor: Daniel Emiliano Lopez Aguilar
//Fecha: 1 de marzo del 2024.
//Ejercicio QUINCE
#include <iostream>
using namespace std;
class Circulo{
  private:
  double radio;
  const  double PI = 3.141;

  public:
  Circulo(double r){
    radio=r;
  }
  
  // ~Circulo(){//destructor
  //  cout<<"Eliminando un circulo\n";
  // }
  
  double circunferencia(){
    return 2*PI*radio;
  }
  double area(){
    return PI*radio*radio;
  }
  
  void show(){
    cout<<"\n";
    cout<<"El radio es:"<<radio<<endl;
    cout<<"La circunferencia es:"<<circunferencia()<<endl;
    cout<<"EL  area es:"<<area();

  }

};
int main(int argc, char const *argv[])
{
  Circulo circulo(4);
  circulo.show();
  return 0; 
}
