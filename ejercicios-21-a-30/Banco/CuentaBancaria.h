// archivo: CuentaBancaria.h
// Daniel Emiliano Lopez Aguilar
// fecha: 29 de abril de 2024
/* descripción:Utiliza el ejercicio 29 para
 crear encabezados de la clase banco y sus dos
  subclases, finalmente un main e incluye las
   instrucciones de preprocesador correspondientes,
    guardias de inclusión de ser necesario.
*/
// ejercicio #30
#ifndef CUENTABANCARIA_H  // Include guard using uppercase and underscores
#define CUENTABANCARIA_H  // Define the header guard

#include <iostream>

#include <string>
using namespace std;
//  ERROR: redefinition of 'class CuentaBancaria'
// Error marcado en vscode, pero sigue funcionando de manera normal.


class CuentaBancaria
{
protected:
  double saldo;
  

public:
  CuentaBancaria(double saldoInit) : saldo(saldoInit){};
  virtual double ahorrarPorMeses(double meses) = 0;
  void consultar() const { cout << "$" << saldo << endl; }
  virtual double depositar(double abono) = 0;
  virtual double ejecutarMantenimiento() = 0;
  virtual double retirar(double retiro) = 0;
};
#endif