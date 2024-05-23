#include "Calculadora.h"
using namespace MyNamespace;

double Calculadora::sumar(double a, double b) {
    return a + b;
}
double Calculadora::restar(double a, double b){
  return a - b;
}
double Calculadora::multiplicar(double a, double b){
  return a * b;
}
double Calculadora::dividir(double a, double b){
  return b != 0 ? a/b : 0;
}
