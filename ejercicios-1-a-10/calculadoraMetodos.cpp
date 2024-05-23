#include <iostream>
using namespace std;
class Calculadora {
public:
  float sumar(float a, float b) { return a + b; }

  float restar(float a, float b) { return a - b; }

  float  multiplicar(float a, float b) { return a * b; }

  float dividir(float a, float b) {  return a / b; }
  
  
  void realizarOperacion(){
    int switchCase;
    float num1, num2, resultadoSuma, resultadoResta;
    float  resultadoMultiplicacion, resultadoDivision;
    cout<<"sumar -> 1, restar ->2, multiplicar->3, dividir->4,"<<endl;
    cin>>switchCase;
    cout<<"ingrese numbero 1: "<<endl;
    cin>>num1;
    cout<<"\ningrese numero 2: "<<endl;
    cin>>num2;

    switch (switchCase)
    {
    case 1:
      resultadoSuma=sumar(num1, num2);
      cout<<"El resultado de la suma es:  " <<resultadoSuma<<endl;

      break;
    case 2:
      resultadoResta=restar(num1, num2);
      cout<<"El resultado de la resta es:   " <<resultadoResta<<endl;
      break;
    case 3:
      resultadoMultiplicacion=multiplicar(num1, num2);
      cout<<"el resultado de la multiplicacion es : "<<resultadoMultiplicacion<<endl;
      break;
    case 4:
      resultadoDivision=dividir(num1, num2);
      cout<<"la division es:"<<resultadoDivision<<endl;
      break;
    default:
      cout<<"Comando no valido";
      break;
    }

  }

};

int main(int argc, char **argv) {
  Calculadora calculadora;
  calculadora.realizarOperacion();
  
}
