//archivo: Crud.h
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
#ifndef CRUD_H
#define CRUD_H
#include "Contactos.h"
#include<iostream>
#include <vector>
using namespace std;
class Crud
{
  private:
    // vector, poliformismo en instanciacion de objetos.
    vector<Contactos> contactList;
  public:
    void add() {
      string name, phoneNum, email;
      cout<<"AGREGANDO NUEVO CONTACTO"<<endl;
      cout << "Ingrese datos: " << endl;
      cout <<endl<< "Nombre:" ;
      cin >> name;
      cout <<endl<< "Numero tel: ";
      cin >> phoneNum;
      cout <<endl<< "email: ";
      cin >> email;
      cout<<"\n";
      contactList.push_back(Contactos(name, phoneNum, email));
    }

    void eliminate(string name) {
      
      string deleteContact;
      
      
      int indexSearched = find(name);
      // Found case
      if (indexSearched != -1)
      {
        cout << "sure you want to delete contact? (y)es or (n)o";
        cin >> deleteContact;
        if (deleteContact == "y") {

          cout << "deleted " << contactList[indexSearched].getNombre() << endl;
          contactList.erase(contactList.begin() + indexSearched);
        }
        else if(deleteContact=="n"){
          cout << "Cancelled elimination";
        }
        else{
          cout<<"Invalid command";
        }
      }
      // Not found case
      else {
        cout << "not found" << endl;
      }
    }

    void displayContacts() {

      contactList.size() == 0 ?
        cout << "No hay contactos que mostrar" << endl
        : cout << "Mis contactos:" << endl;

      for (int i = 0; i < contactList.size(); i++)
      {
        cout << i + 1 <<".-"<< endl;
        cout <<"Nombre: "<< contactList[i].getNombre() << endl;
        cout <<"telefono: "<< contactList[i].getNumero() << endl;
        cout <<"email: "<< contactList[i].getEmail() << endl;
        cout << "\n";
      }
    }

    int find(string nameSearched) {
      int i = 0;
      bool found = false;
      string currentName = contactList[i].getNombre();
      int notFound = -1;
      while (i < nameSearched.size() && !found)
      {
        if (currentName == nameSearched)
        {
          found = true;
          cout <<endl << currentName << " ENCONTRANDO EN EL INDICE " << i <<endl;
          cout<<"\n";
          break;
        }
        else {
          cout<<nameSearched<<" NO ENCONTRADO"<<endl; 
          cout<<"\n";
          return notFound;
        }
      }
      return i;
    }

};
#endif //CRUD_H