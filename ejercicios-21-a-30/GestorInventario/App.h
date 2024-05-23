//archivo: App.h
//autor: Daniel Emiliano Lopez Aguilar
// fecha: 01/05/2024
/* descripción: Gestor de inventario: Crea un programa para gestionar el
 inventario de una tienda. El inventario debe contener información sobre
  los productos, incluyendo su nombre, precio y cantidad en stock. Utiliza
   un archivo de encabezado para definir la estructura del producto y las
    funciones para añadir productos al inventario, actualizar sus detalles,
     realizar ventas y generar informes de inventario.
*/
// ejercicio #31
#include "Funciones.h"
#include "Producto.h"
#include<iostream>
#include <stdlib.h> 
using namespace std;
class App
{ 
  private:
    string updateMessage="Inventario actualizado";
    string deleteMessage="Producto eliminado";
    string addMessage="Producto agregado";
    string errorMessage="Error";
  public:
    void menu(){
      cout<<"Sistema de inventario"<<endl;
      cout<<"(1) Agregar"<<endl;
      cout<<"(2) Actualizar"<<endl;
      cout<<"(3) vender"<<endl;
      cout<<"(4) Generar informe"<<endl;
      cout<<"(0) Salir"<<endl;
    };
    void main() {
    Funciones func; 
    int command=1;
    int  exitCommand = 0;
    while (command != exitCommand)
    {
      menu();
      cout<<"Ingresar comando: ";
      cin >> command;
      string searchName;
      int quantity;
      switch (command)
      {
      case  1:
        system("cls");
        func.add();
        break;
      case 2:
        system("cls");
        cout<<"Ingresar producto para actualizar:"<<endl;
        cin>>searchName;
        func.mainUpdate(searchName);
        break;
      case 3:
        system("cls");
        cout<<"Ingresar producto para vender:"<<endl;
        cin>>searchName;
        cout<<"Cantidad"<<endl;
        cin>>quantity;
        func.mainSell(searchName, quantity);
        break;
      case 4:
        system("cls");
        func.generateReport();
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