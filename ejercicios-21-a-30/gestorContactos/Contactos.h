//archivo: Contactos.h
//autor: Daniel Emiliano Lopez Aguilar
// fecha: 01/05/2024
/* descripción: Gestor de contactos:
 Desarrolla un programa que permita al usuario almacenar 
 y gestionar una lista de contactos. Cada contacto debe 
 tener un nombre, un número de teléfono y una dirección 
 de correo electrónico. Utiliza un archivo de encabezado 
 para definir la estructura del contacto y las funciones
  para agregar, eliminar, buscar y mostrar contactos.
*/
// ejercicio #31
#ifndef CONTACTOS_H
#define CONTACTOS_H
#include<iostream>
#include <string>
using namespace std;
class Contactos
{
private:
  
  string nombre;
  string numero;
  string email;
public:
  Contactos( string nom, string num, string em)
  : nombre(nom), numero(num), email(em){};  
  string getNombre(){return nombre;}
  string getNumero(){return numero;}
  string getEmail(){return email;}
  void setNombre(string nom){nombre=nom;}
  void setNumero(string num){numero=num;}
  void setEmail(string em){email=em;}
};

#endif
