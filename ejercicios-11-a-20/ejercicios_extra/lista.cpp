#include <iostream>
using namespace std;
// Definición de la estructura Nodo para la lista simple
struct Nodo {
    int dato;
    Nodo* siguiente;
};
// Clase para la lista simple
class ListaSimple {
private:
    Nodo* cabeza;
public:
    ListaSimple() : cabeza(nullptr) {} 
    // Método para agregar un elemento al inicio de la lista
    void agregarAlInicio(int valor) {
        Nodo* nuevoNodo = new Nodo();
        nuevoNodo->dato = valor;
        nuevoNodo->siguiente = cabeza;
        cabeza = nuevoNodo;
    }
    // Método para imprimir la lista
    void imprimir() {
        Nodo* temp = cabeza;
        while (temp != nullptr) {
            cout<<temp->dato<<" ";
            temp = temp->siguiente;
        }
        cout<<endl;
    }
};
int main() {
    ListaSimple lista;
    lista.agregarAlInicio(3);
    lista.agregarAlInicio(5);
    lista.agregarAlInicio(7);
    lista.imprimir();
    return 0;
}

