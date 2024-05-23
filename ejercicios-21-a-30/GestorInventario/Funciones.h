//archivo: Funciones.h
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
#ifndef FUNCIONES_H
#define FUNCIONES_H
#include "Producto.h"
#include <iostream>
#include <string>
#include <vector>
#include <functional>
using namespace std;
class Funciones
{
private:
  vector <Producto> inventario;
  /*
  @brief:
  Metodo auxiliar para mostrar un producto.
  Usado en find() y generateReport()
  @param:
    int i: Indice para inventario[].
  @return:
    Ninguno.
*/
  void showProduct(int i) {
    cout << "   Nombre: " << inventario[i].getName() << endl;
    cout << "   Precio: $" << inventario[i].getPrice() << endl;
    cout << "   Cantidad: " << inventario[i].getQuantity() << endl;
  }
  /*
    @brief:
      resta la cantidad de un objeto de la clase Producto con getters.
    @param:
      string name: Nombre del producto a vender.
      int i: indice del producto para identificarlo en inventario[].
      int comodin: cantidad a vender.
    @return:
      Ninguno.
  */
  void sell(string name, int i, int comodin) {
    int quantity = comodin;
    inventario[i].setQuantity(inventario[i].getQuantity() - quantity);
    cout << "vendido " << quantity << " unidades de " << inventario[i].getName();
  }
  /*
  @brief:
    Actualiza los valores usando operadores ternarios con getters y setters
    que fueron declarados en Producto.h
    @param:
      string name: nombre del producto.
      int index: indice del producto.
      int comodin: por cuestinable calidad de  diseño, comodin se modifica como  parametro
      de cantidad en metodo sell de clase Funciones.
    @return:
      Ninguno.
      java -> split try catch trim
  */ 
  void update(string name, int index, int comodin) {
    int price, quantity;
    cout << "ingrese valores a modificar:" << endl;
    cout << "Ingrese nuevo precio" << endl;
    cin >> price;
    price == 0 ? price = inventario[index].getPrice() : inventario[index].setPrice(price);
    cout << "Ingrese nueva cantidad" << endl;
    cin >> quantity;
    quantity == 0 ? quantity = inventario[index].getQuantity() : inventario[index].setQuantity(quantity);
    cout << "Ingrese nuevo nombre" << endl;
    cin >> name;
    name == "" ? name = inventario[index].getName() : inventario[index].setName(name);
    cout << "Producto modificado" << endl;
  }
  /*
   @brief:
    Muestra el inventario.
  @param:
    String productSearched: nombre del producto a buscar.
    bool onDisplay: si se quiere mostrar la info completa del producto en pantalla o no.
    function: se agrega una funcion (update o sell) que se ejecuta si se encuentra el producto.
  @return:
    Ninguno.
  */
  void find(string productSearched, bool onDisplay, function<void(string, int, int)> func) {
    int i = 0;
    bool found = false;
    int comodin;
    // No me agrada que se vea tan largo, asi que esta en una variable CurrentName.
    // Caso que no es encontrado.
    while (i < inventario.size() && !found)
    { 
      string currentName = inventario[i].getName();
      // Caso nombre es encontrado.
      if (currentName == productSearched)
      {
        found = true;
        if (!onDisplay) {
          cout << endl << currentName << " ENCONTRANDO EN EL INDICE " << i << endl;  
        }
        // Caso que se quiere mostrar la info completa del producto en pantalla.
        else {
          cout << "Producto: " << endl;
          // Aqui se ejecuta la funcion extra.
          showProduct(i);
        }
        func(currentName, i, comodin);
        cout << "\n";
      }
     i++;
    }
        if (!found) {
        cout << productSearched << " NO ENCONTRADO" << endl;
        cout << "\n";
    }
  }
public:
  /*
   @brief:
    Agrega un producto al inventario usando cout.
  @param:
    Ninguno.
  @return:
    Ninguno.
  */
  void add() {
    string nombre;
    int precio, cantidad;
    cout << "Nombre del producto: ";
    cin >> nombre;
    cout << "Precio del producto: ";
    cin >> precio;
    cout << "Cantidad del producto: ";
    cin >> cantidad;
    inventario.push_back(Producto(nombre, precio, cantidad));
  }

  /*
  @brief:
    Ejecuta metodo update dentro del metodo find.
    Al no utilizar comodin se declara como 0.
    @param:
      string name: Nombre del producto a actualizar.
    @return:
      Ninguno.
  */
  void mainUpdate(string name) {
    find(name, true, bind(&Funciones::update, this, placeholders::_1, placeholders::_2, 0));
  }

  /*
  @brief:
    Ejecuta metodo sell dentro del metodo find.
  @param:
    string name: Nombre del producto a vender.
    int quantity: Cantidad a vender.
  @return:
    Ninguno.
  */
  void mainSell(string name, int quantity) {
    find(name, false, bind(&Funciones::sell, this, placeholders::_1, placeholders::_2, quantity)); 
  }
  
  /*
  @brief:
    genera un reporte de los productos en inventario.
    Muestra nombre, cantidad, precio, valor total de producto en inventario, inventario total.
  @param:
    Ninguno.
  @return:
    Ninguno.
  */
  void generateReport() {
    inventario.size() == 0 ?
      cout << "No hay Productos que mostrar" << endl
      : cout << "Productos:" << endl;
    int valorInventarioTotal=0;
    for (int i = 0; i < inventario.size(); i++)
    {
      cout << i + 1 << ".-" << endl;
      showProduct(i);
      int productoTotal = inventario[i].getPrice() * inventario[i].getQuantity();
      cout << "   Valor total: $" << productoTotal << endl;
      cout << "\n";
      valorInventarioTotal += productoTotal;
    }
    cout << "Inventario total: $" << valorInventarioTotal << endl;
  }
};
#endif //FUNCIONES_H