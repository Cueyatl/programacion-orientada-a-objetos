#include <iostream>
using namespace std;
struct Nodo
{
  double resultado;
  Nodo *siguiente;
  int posicion;
  char operador;
  Nodo(double val, char op):  resultado(val), operador(op),  siguiente(nullptr){}
};

class Calculadora{
  private:
  Nodo* expresion;
  public:
  Calculadora(): expresion(nullptr){}
  void insertarExpresion(double num1, double num2, char operador){
    expresion=new Nodo(num1, operador);
    expresion->siguiente=new Nodo(num2, '\0');

  }
  double calcular(){
    if (expresion==nullptr || expresion->siguiente==nullptr)
    {
      cerr<<"expresion invalida"<<endl;
      return 0.0:
    }
    double resultado;
    switch (expresion->operador)
    {
    case 1:
      nuevo->resultado = primer + segundo;
      break;
    case 2:
      nuevo->resultado = primer - segundo;
      break;
    case 3:
      nuevo->resultado = primer * segundo;
      break;
    case 4:
      if (segundo = 0)
      {
        expresion->siguiente->resultado==0
      }
      else
      {
        nuevo->resultado = primer / segundo;
      }
      break;
    default:
      nuevo->resultado = 0;
      break;
    }
  }
}