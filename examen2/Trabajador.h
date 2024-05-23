#ifndef TRABAJADOR_H
#define TRABAJADOR_H

#include <iostream>
#include <string>
using namespace std;
class Trabajador
{
protected:
  string nombre;
  int edad;
  double salarioBase;
  static int idCount;
  int id;

public:
  Trabajador(string nom, int eda, double salar)
      : nombre(nom), edad(eda), salarioBase(salar)
  {
    id = idCount++;
  }
  virtual double calcularSalario() const = 0;
  virtual string getTipo() const = 0;

  // Setters and getters.
  string getName() { return nombre; }
  int getAge() { return edad; }
  int getSalary() { return salarioBase; }
  void setName(string nom) { nombre = nom; }
  void setAge(int eda) { edad = eda; }
  void setSalary(int salar) { salarioBase = salar; }
};

int Trabajador::idCount = 1;
class TiempoParcial : public Trabajador
{
public:
  TiempoParcial(string nombre, int edad, double salarioBase)
      : Trabajador(nombre, edad, salarioBase) {}

  // string getTipo() const override { return "Tiempo Parcial"; }
  // double calcularSalario() const override { return salarioBase / 2; }
};

class TiempoCompleto : public Trabajador
{
public:
  TiempoCompleto(string nombre, int edad, double salarioBase)
      : Trabajador(nombre, edad, salarioBase) {}
  // string getTipo() const override { return "Tiempo completo"; }
  // double calcularSalario() const override { return salarioBase; }
};




class Asalariado : public TiempoCompleto
{
public:
  Asalariado(string nombre, int edad, double salarioBase)
      : TiempoCompleto(nombre, edad, salarioBase) {}
  string getTipo() const override { return "Asalariado, Tiempo completo"; }
  double calcularSalario() const override { return salarioBase; }
};


class PorHora : public TiempoParcial
{
public:
  int horas;
  void setHoras(int hors) { horas = hors; };
  PorHora(string nombre, int edad, double salarioBase)
      : TiempoParcial(nombre, edad, salarioBase) {}
  string getTipo() const override { return "Por hora, Tiempo parcial"; }
  double calcularSalario() const override { return salarioBase*horas; }
};
#endif // TRABAJADOR_H
       /*
       clas trabajador (nombre salario base, id);
       // tiempo parcial, trabajador
       // tiempo completo. trabajador
       ELIMINAR asalaridado parcial
       asalariado completo
       por hora parcial
       ELIMINAR por hora completo
       */