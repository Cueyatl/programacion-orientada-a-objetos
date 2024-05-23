// archivo: CuentaAhorro.h
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
#include<iostream>
#include <string>
using namespace std;
class CuentaAhorro : public CuentaBancaria
{
protected:
  const double interes = 0.02;
private:
  double ejecutarMantenimiento(){
    return 0;
  }
public:

  CuentaAhorro(double saldo) : CuentaBancaria(saldo) {}


  double ahorrarPorMeses(double meses) 
  {
    cout << "saldo" << saldo << endl;
    cout << "interes" << interes * meses << endl;
    cout << "nuevo saldo" << saldo << endl;
    // nuevo saldo:
    saldo += (meses * interes * saldo);
    return saldo;
  }

  double depositar(double abono)
  {
    cout << "En su cuenta de AHORRO esta depositando: $" << abono << endl;
    return saldo += abono;
  }
  double retirar(double retiro)
  {
    string msgOkay = "En su cuenta de AHORRO esta retirando: $";
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
