#include <string>
#include <iostream>
using namespace std;
class Persona {
private:
  string name;
  string apellido;
  int age;
  string estadoCivil;

public:
  // constructor
  Persona(string n, string ap, int a, string ec) {
    name = n;
    apellido = ap;  
    age = a;
    estadoCivil = ec;
  }
  void mostrarDetalles() {
    cout << "nombre: " << name << endl;
    cout << "apellido: " << apellido << endl;
    cout << "edad: " << age << endl;
    cout << "estado civil: " << estadoCivil << endl;
    cout << endl;
  }
  void cambiarNombre(string nuevoNombre) { name = nuevoNombre; }
  void cambiarApellido(string nuevoApellido) { apellido = nuevoApellido; }
  void cambiarEstadoCivl(string nuevoEstadoCivil) {
    estadoCivil = nuevoEstadoCivil;
  }
  void borrarDato(string dato) {
    if (dato == "nombre") {
      name = "";
    } else if (dato == "apellido") {
      apellido = "";
    } else if (dato == "edad") {
      age = 0;
    } else if (dato == "ec") {
      estadoCivil = "";
    }
  }
  void borrarTodo(){
    name = "";
    apellido = "";
    age = 0;
    estadoCivil = "";
  }
};
int main(int argc, char **argv) {
  Persona persona("juan", "Garnica", 24, "Casado");
  persona.mostrarDetalles();
  persona.cambiarNombre("Juan Ignacio");
  persona.cambiarApellido("Lugo Juarez");
  persona.cambiarEstadoCivl("Soltero");
  persona.borrarDato("nombre");
  persona.mostrarDetalles();
  persona.borrarTodo();
  persona.mostrarDetalles();
  return 0;
}