#include<iostream>
using namespace std;
class Saludo
{
private:
  
public:
  
  void enviar(){  
    cout<<"Hola desde el encabezado";
  };
  virtual void recibir()=0;
};