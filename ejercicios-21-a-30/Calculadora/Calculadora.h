//archivo: Calculadora.cpp  
//autor: Daniel Emiliano Lopez Aguilar
// fecha: 4/26/2024
/* descripción: Calculadora
*/
// ejercicio #30
#ifndef CALCULADORA_H
#define CALCULADORA_H
#include<iostream>
using namespace std;
namespace MyNamespace {
class Calculadora
{
private:
  
public:
  // Metodos vacios o Plantillas.
  static double sumar(double a, double b);
  static double restar(double a, double b);
  static double multiplicar(double a, double b);
  static double dividir(double a, double b);
  
};
};
#endif