#include<iostream>
#include "Saludo.h"
using namespace std;
class app : public Saludo
{
private:
  /* data */
  void recibir(){
    
  }
public:
  app():Saludo(){};
  void saludar()
  {
    cout<<"Hola Mundo"<<endl;
  }
};

int main()
{ 
  app mijares;
  mijares.enviar();
  mijares.saludar();
  

return 0;
}