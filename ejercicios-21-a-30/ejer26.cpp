
//autor: Daniel Emiliano Lopez Aguilar

/* descripción: 
Hacer una super clase Vehiculo, con tres sub clases, Automovil, Bicicleta y Motocicleta.
 Utiliza un metodo virtual puro para calcular la velocidad.

Crea medios para que el usuario responda
¿Qué distancia recorrió?
¿Cuánto tiempo se tardó?

*/
// ejercicio #26
#include <iostream>
using namespace std;

class Vehiculo {
public:
    virtual double calcularVelocidad() const = 0;
};

class Automovil : public Vehiculo {
private:
    const double distancia = 80;
public:
    Automovil() {}
    double calcularVelocidad() const override {
        double tiempo;
        cout << "Ingrese tiempo para Automovil: ";
        cin >> tiempo;
        cout << "distancia: " << distancia << ", velocidad: " << distancia / tiempo << ", tiempo: " << tiempo << endl;
        return distancia / tiempo;
    }
};

class Bicicleta : public Vehiculo {
private:
    const double distancia = 20;
public:
    Bicicleta() {}
    double calcularVelocidad() const override {
        double tiempo;
        cout << "Ingrese tiempo para Bicicleta: ";
        cin >> tiempo;
        cout << "distancia: " << distancia << ", velocidad: " << distancia / tiempo << ", tiempo: " << tiempo << endl;
        return distancia / tiempo;
    }
};

class Motocicleta : public Vehiculo {
private:
    const double distancia = 60;
public:
    Motocicleta() {}
    double calcularVelocidad() const override {
        double tiempo;
        cout << "Ingrese tiempo para Motocicleta: ";
        cin >> tiempo;
        cout << "distancia: " << distancia << ", velocidad: " << distancia / tiempo << ", tiempo: " << tiempo << endl;
        return distancia / tiempo;
    }
};

int main(int argc, char const *argv[]) {
    Motocicleta italika;
    italika.calcularVelocidad();
    return 0;
}
