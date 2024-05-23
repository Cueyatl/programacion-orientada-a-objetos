#ifndef ADVININZA_H
#define ADVININZA_H
#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
class adivinanza
  {
  private:
    int intentos=5;  
    int limiteSuperior=100;
    int numeroUsuario;
    int generarNumero(){return rand() % limiteSuperior + 1; }
  public:
    void jugar()
    {
      int numRandom = generarNumero();
      do
      {
      intentos--;
        cout << "Ingresa numero"<<endl;
        cin >> numeroUsuario;
        if (numeroUsuario != numRandom)
        {
          if (numeroUsuario< numRandom) 
          {
            cout<<"Muy BAJO, intenta de nuevo."<<endl;
            cout<<"intentos restantes: "<<intentos<<endl;
          }
          else
          { cout<<"Muy ALTO, intenta de nuevo."<<endl;
            cout<<"intentos restantes: "<<intentos;}
          }
        else
        {cout<<"Adivinaste! El numero es "<<numRandom<<endl;}
      } while (numeroUsuario != numRandom);
    };
};
#endif // ADVININZA_H
