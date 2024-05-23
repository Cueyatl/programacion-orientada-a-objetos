// archivo: CuentaCorriente.h
// Daniel Emiliano Lopez Aguilar
// fecha: 29 de abril de 2024
/* descripción:Utiliza el ejercicio 29 para
 crear encabezados de la clase banco y sus dos
  subclases, finalmente un main e incluye las
   instrucciones de preprocesador correspondientes,
    guardias de inclusión de ser necesario.
*/
// ejercicio #30
#include "CuentaBancaria.h"
#include <iostream>
#include <string>
// #include "CuentaAhorro.h"
using namespace std;
class CuentaCorriente : public CuentaBancaria
{
protected:
  const double cuotaDeMantenimiento = 55;

private:
  double ahorrarPorMeses(double meses)
  {
    return 0;
  }

public:
  CuentaCorriente(double saldo) : CuentaBancaria(saldo) {}
  // ejecutarMantenimiento es un metodo de la clase CuentaCorriente
  // regresa el saldo menos la cuota cobrada.
  double ejecutarMantenimiento()
  {
    cout << "cuota de mantenimiento es de:" << cuotaDeMantenimiento << endl;
    return saldo -= cuotaDeMantenimiento;
  }
  double depositar(double abono)
  {
    cout << "En su cuenta CORRIENTE esta depositando: $" << abono << endl;
    return saldo += abono;
  }
  double retirar(double retiro)
  {
    string msgOkay = "En su cuenta CORRIENTE esta retirando: $";
    string msgError = "Fondos insuficientes.";
    if (saldo - retiro > 0)
    {
      cout << msgOkay << retiro << endl;
      return saldo -= retiro;
    }
    else
    {
      cout << msgError << endl;
      return saldo;
    }
  }
};