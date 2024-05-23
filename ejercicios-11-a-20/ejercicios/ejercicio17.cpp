//Daniel Emiliano Lopez Aguilar
// ejercicio 17.
#include <iostream>
using namespace std;

class Alumno{
  private:
    string nombre;
    string grupo;
    int calificaciones[3] = {0,0,0};
  public:
  Alumno(string n, string g, int c1, int c2, int c3){
    nombre=n;
    grupo=g;
    calificaciones[0]=c1;
    calificaciones[1]=c2;
    calificaciones[2]=c3;
  }
  float size=sizeof(calificaciones)/sizeof(i  nt);
  void mostrar(){
    cout << "Nombre: "<<nombre<<endl;
    cout << "Grupo: "<<grupo<<endl;
      cout<<"Calificaciones"<<endl;
    for (int i = 0; i < size; i++) {
      cout<<"parcial "<<i+1<<": "<<calificaciones[i]<<endl;
    }
  }
  void calcularPromedio(){
    float suma=0;
    for (int i = 0; i < size; i++) {
       suma+=calificaciones[i];
    }
    cout<<"promedio: "<<suma/size<<endl;
  }
};
int main(int argc, char const *argv[])
{
  Alumno aaa("Lorenzo Lucero", "A1", 9,8,7);
  aaa.mostrar();
  aaa.calcularPromedio();
  return 0;
}
