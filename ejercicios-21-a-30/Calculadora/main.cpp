#include<iostream>
#include "Calculadora.h"
using namespace std;
using namespace MyNamespace;
// sust por partes, trigonometricas y 
  
int main(int argc, char const *argv[])
{
  double num1, num2;
  char operador;
  cout<<"ingrese el primer numero: ";
  cin>>num1;
  cout<<"ingrese el segundo numero: ";
  cin>>num2;
  cout<<"ingrese el operador (+ - * /):";
  cin>>operador;
   MyNamespace::Calculadora mona;
  
  switch (operador)
  {
    case '+':
      cout<<"la suma es: ";
    mona.dividir(num1, num2);
    case '-':
    cout<<"la resta es: ";
    mona.restar(num1, num2);
    case '*':
    cout<<"la multiplicacion es: ";
    mona.multiplicar(num1, num2);
    case '/':
    cout<<"la division es: ";
    mona.dividir(num1, num2);
    break;
  default:
    break;
  }
return 0;
}