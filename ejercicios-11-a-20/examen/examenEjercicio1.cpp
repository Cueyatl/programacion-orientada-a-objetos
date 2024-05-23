// Daniel Emiliano Lopez Aguilar.
// 16 de marzo del 2024.
//Examen ejercicio 1.
#include <iostream>
using namespace std;
class Persona{
  private:
    string nombre;
    int edad=0;
    string estadoCivil;
  public:
  Persona(string n, int e, string ec){
    nombre = n;
    edad = e;
    estadoCivil = ec;
  }
   void mostrar(){
    cout<<"nombre: "<<nombre<<endl;
    cout<<"edad: "<<edad<<endl;
    cout<<"estado civil: "<<estadoCivil<<endl;
  }

  void actualizar(string nuevoNombre, int nuevoEdad, string nuevoEstadoCivil){
    nuevoNombre==""?
      nuevoNombre=this->nombre
      :this->nombre=nuevoNombre;

    nuevoEdad<=0?
      edad=this->edad
      :this->edad=nuevoEdad;

    nuevoEstadoCivil==""?
      estadoCivil=this->estadoCivil
      :this->estadoCivil=nuevoEstadoCivil;
  }
};

int main(int argc, char const *argv[])
{
  Persona p1( "Juan",25,"Soltero");
  p1.mostrar();
  p1.actualizar("Pedro",0,"Casado");
  p1.mostrar();
  return 0;
}
