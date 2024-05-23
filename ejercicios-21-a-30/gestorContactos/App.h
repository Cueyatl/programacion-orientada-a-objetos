//archivo: App.h
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
#include "Contactos.h"
#include "Crud.h"
#include<iostream>
#include <stdlib.h> 
using namespace std;
class App
{
private:

public:
  void menu() {
  cout<<"Bienvenido a tu agenda de contactos"<<endl;
  cout<<"(1) Agregar contacto"<<endl;
  cout<<"(2) Eliminar contacto"<<endl;
  cout<<"(3) Buscar contacto"<<endl;
  cout<<"(4) Mostrar todos los contactos"<<endl;
  cout<<"(0) Salir"<<endl;
  };
  void main() {
    Crud crud;
    int command=1;
    int  exitCommand = 0;
    while (command != exitCommand)
    {
      menu();
      cout<<"Ingresar comando: ";
      cin >> command;
      string searchName;
      switch (command)
      {
      case  1:
        system("cls");
        crud.add();
        break;
      case 2:
        system("cls");
        cout<<"Ingresar nombre a buscar:"<<endl;
        cin>>searchName;
        crud.eliminate(searchName);
        cout<<"helo";
        break;
      case 3:
        system("cls");
        cout<<"Ingresar nombre a buscar:"<<endl;
        cin>>searchName;
        crud.find(searchName);

        break;
      case 4:
        system("cls");
        crud.displayContacts();
        break;
      case 0:
        system("cls");
        cout<<"Saliendo del programa";
        break;
      default:
        cout<<"";
        break;
      }


    }
  }

};