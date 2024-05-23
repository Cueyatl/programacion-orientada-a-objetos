// Daniel Emiliano Lopez Aguilar.
// 16 de marzo del 2024.
//Ejercicio 3 de examen.
#include <iostream>
using namespace std;
struct Nodo
{
  double resultado;
  Nodo *siguiente;
  int posicion;
};


class Calculadora
{
private:
  Nodo *cabeza = NULL;
  int posicionActual=0;
public:
  Calculadora() : cabeza(nullptr) {}
  void agregarAlInicio()
  {
    Nodo *nuevo;
    
    double primer, segundo, opeResultado;
    cout << "Ingrese primer numero: " << endl;
    cin >> primer;
    string ope;
    while (ope != "+" && ope != "-" && ope != "*" && ope != "/")
    {
      cout << "Ingrese el operador (+,-,*,/): " << endl;
      cin >> ope;
    }
    cout << "Ingrese el segundo numero: " << endl;
    cin >> segundo;

    int switchCase; 
    ope == "+" ? switchCase = 1 
  : ope == "-" ? switchCase = 2
  : ope == "*"   ? switchCase = 3
  : switchCase = 4;

    switch (switchCase)
    {
    case 1:
      nuevo->resultado = primer + segundo;
      break;
    case 2:
      nuevo->resultado = primer - segundo;
      break;
    case 3:
      nuevo->resultado = primer * segundo;
      break;
    case 4:
      if (segundo = 0)
      {
        cout << "No se puede dividir entre cero." << endl;
        nuevo->resultado = 0;
      }
      else
      {
        nuevo->resultado = primer / segundo;
      }
      break;
    default:
      nuevo->resultado = 0;
      break;
    }
    nuevo->posicion = posicionActual++;
    nuevo->siguiente = cabeza;
    cabeza = nuevo;
  }
    void imprimir()
    {
      Nodo *temp = cabeza;
      while (temp != nullptr)
      {
        cout <<"Posicion: "<< temp->posicion << " "<<"resultado: "<<temp->resultado;
        temp = temp->siguiente;
      }
      cout << endl;
    }
  };
  int main(int argc, char const *argv[])
  {
    Calculadora miCalculadora;
    miCalculadora.agregarAlInicio();
    miCalculadora.imprimir();
    


    return 0;
  }
  