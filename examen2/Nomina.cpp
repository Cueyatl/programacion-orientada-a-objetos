#include <iostream>
#include <vector>
#include <string>
#include <memory>
using namespace std;

class Trabajador
{
protected:
  string nombre;
  int edad;
  float salarioBase;
  static int proximoID;
  int ID;

public:
  Trabajador(const string &nombre, int edad, float salarioBase)
      : nombre(nombre), edad(edad), salarioBase(salarioBase)
  {
    ID = proximoID++;
  }
  virtual ~Trabajador() {}
  virtual float calcularSalario() const = 0; // Metodo virtual puro
  virtual string getTipo() const = 0;        // Metodo virtual puro
  int getID() const { return ID; }
  const string &getNombre() const { return nombre; }
  int getEdad() const { return edad; }
  float getSalarioBase() const { return salarioBase; }
};

int Trabajador::proximoID = 1;

// Clase derivada TiempoParcial
class TiempoParcial : public Trabajador
{
public:
  TiempoParcial(const string &nombre, int edad, float salarioBase)
      : Trabajador(nombre, edad, salarioBase) {}
};

// Clase derivada TiempoCompleto
class TiempoCompleto : public Trabajador
{
public:
  TiempoCompleto(const string &nombre, int edad, float salarioBase)
      : Trabajador(nombre, edad, salarioBase) {}
};

// Clase derivada Asalariado
class Asalariado : public TiempoParcial
{
public:
  Asalariado(const string &nombre, int edad, float salarioBase)
      : TiempoParcial(nombre, edad, salarioBase) {}

  float calcularSalario() const override { return salarioBase; }

  string getTipo() const override { return "Asalariado"; }
};

// Clase derivada PorHora
class PorHora : public TiempoParcial
{
  float horasTrabajadas;
  float tarifaPorHora;

public:
  PorHora(const string &nombre, int edad, float salarioBase, float horasTrabajadas,
          float tarifaPorHora)
      : TiempoParcial(nombre, edad, salarioBase), horasTrabajadas(horasTrabajadas),
        tarifaPorHora(tarifaPorHora) {}

  float calcularSalario() const override
  {
    return salarioBase + (horasTrabajadas * tarifaPorHora);
  }

  string getTipo() const override { return "PorHora"; }

  float getHorasTrabajadas() const { return horasTrabajadas; }
  float getTarifaPorHora() const { return tarifaPorHora; }
};

// Clase SistemaGestionEmpleados
class SistemaGestionEmpleados
{
private:
  vector<unique_ptr<Trabajador>> empleados;

public:
  void agregarTrabajador(unique_ptr<Trabajador> empleado) { empleados.push_back(move(empleado)); }

  void eliminarTrabajador(int ID)
  {
    for (auto it = empleados.begin(); it != empleados.end(); ++it)
    {
      if ((*it)->getID() == ID)
      {
        empleados.erase(it);
        break;
      }
    }
  }

  void mostrarInformacion() const
  {
    cout << "ID\tNombre\tEdad\tTipo\tSalario\tDetalles\n";

    for (const auto &empleado : empleados)
    {
      cout << empleado->getID() << "\t" << empleado->getNombre() << "\t" << empleado->getEdad() << "\t"
           << empleado->getTipo() << "\t" << empleado->calcularSalario() << "\t";

      if (empleado->getTipo() == "PorHora")
      {
        cout << "Horas trabajadas: " << dynamic_cast<const PorHora *>(empleado.get())->getHorasTrabajadas()
             << ", Tarifa por hora: " << dynamic_cast<const PorHora *>(empleado.get())->getTarifaPorHora();
      }

      cout << endl;
    }
  }
};
class App
{
public:
  void ejecutar()
  {
    SistemaGestionEmpleados sistema; // Instancia de la clase SistemaGestionEmpleados

    while (true)
    {
      mostrarMenu(); // Funcion para mostrar el menu de opciones

      int opcion;
      cout << "Ingrese una opcion: ";
      cin >> opcion;

      switch (opcion)
      {
      case 1:
        agregarTrabajador(sistema);
        break;
      case 2:
        eliminarTrabajador(sistema);
        break;
      case 3:
        sistema.mostrarInformacion();
        break;
      case 0  :
        cout << "Saliendo...\n";
        return;
      default:
        cout << "Opcion no valida\n";
      }
    }
  }

private:
  void mostrarMenu()
  {
    cout << "\nmenu principal:\n";
    cout << "1. Agregar trabajador\n";
    cout << "2. Eliminar trabajador\n";
    cout << "3. Mostrar informacion de los trabajadores\n";
    cout << "0. Salir\n";
  }

  void agregarTrabajador(SistemaGestionEmpleados &sistema)
  {
    string nombre, tipoTrabajador;
    int edad;
    float salarioBase, horasTrabajadas, tarifaPorHora;

    cout << "Ingrese el nombre del trabajador: ";
    cin >> nombre;

    cout << "Ingrese la edad del trabajador: ";
    cin >> edad;

    cout << "Ingrese el salario base del trabajador: ";
    cin >> salarioBase;

    cout << "Ingrese el tipo de trabajador (Asalariado/PorHora): ";
    cin >> tipoTrabajador;

    if (tipoTrabajador == "Asalariado")
    {
      sistema.agregarTrabajador(make_unique<Asalariado>(nombre, edad, salarioBase));
    }
    else if (tipoTrabajador == "PorHora")
    {
      cout << "Ingrese las horas trabajadas: ";
      cin >> horasTrabajadas;

      cout << "Ingrese la tarifa por hora: ";
      cin >> tarifaPorHora;

      sistema.agregarTrabajador(make_unique<PorHora>(nombre, edad, salarioBase, horasTrabajadas, tarifaPorHora));
    }
    else
    {
      cout << "Tipo de trabajador no valido\n";
    }
  }

  void eliminarTrabajador(SistemaGestionEmpleados &sistema)
  {
    int ID;
    cout << "Ingrese el ID del trabajador que desea eliminar: ";
    cin >> ID;

    sistema.eliminarTrabajador(ID);
  }
};
int main()
{
  App app;
  app.ejecutar();
  return 0;
}
