// archivo: main.cpp
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
#include "CuentaAhorro.h"
#include "CuentaCorriente.h"
#include <iostream>
#include <string>

using namespace std;
int main(int argc, char const *argv[])
{
  CuentaAhorro cliente(10);
  cliente.depositar(100);
  cliente.consultar();
  CuentaCorriente cliente2(10);
  cliente2.depositar(100);
  cliente2.retirar(1);
  cliente2.consultar();
  return 0;
}
