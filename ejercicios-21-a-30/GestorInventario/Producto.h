//archivo: Producto.h
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
#ifndef PRODUCTO_H
#define PRODUCTO_H 
#include<iostream>
using namespace std;
class Producto
{
private:
  string name;
  int price = 0;
  int quantity = 0;
public:
  Producto(string nam, int pri, int quan) :name(nam), price(pri), quantity(quan) {};
  string getName() { return name; }
  int getPrice() { return price; }
  int getQuantity() { return quantity; }
  int setQuantity(int quan) { quantity = quan; return quantity; }
  string setName(string nam) { name = nam; return name; }
  int setPrice(int pri) { price = pri; return price; }
};
#endif //PRODUCTO_H
