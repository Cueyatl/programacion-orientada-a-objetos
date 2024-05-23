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
    string opcs[4]={"suma", "resta", "multiplicacion", "division"};

    for (int i = 0; i <=3; i++)
    {
      cout<<i<<"..."<<opcs[i]<<endl;
    }

    float num1, num2, resultadoSuma, resultadoResta;
    float  resultadoMultiplicacion, resultadoDivision;

    cin>>switchCase;
    cout<<"ingrese primer numero: "<<endl;
    cin>>num1;
    cout<<"\ningrese segundo numero: "<<endl;
    cin>>num2;

    switch (switchCase)
    {
    case 0:
      resultadoSuma=sumar(num1, num2);
      cout<<"El resultado de la suma es:  " <<resultadoSuma<<endl;

      break;
    case 1:
      resultadoResta=restar(num1, num2);
      cout<<"El resultado de la resta es:   " <<resultadoResta<<endl;
      break;
    case 2:
      resultadoMultiplicacion=multiplicar(num1, num2);
      cout<<"el resultado de la multiplicacion es : "<<resultadoMultiplicacion<<endl;
      break;
    case 3:
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
