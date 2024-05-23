//16 de febrero del 2024.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generarNumero(){
  return rand()%100+1;
}
void limpiarPantalla(){
  system("CLS");
}
int inputUsuario(){
  int intentos=0;
  cin>>intentos;
  return intentos;
}
int main(int argc, char const *argv[])
{
  
  
  // srand(time(0)); 
  int intRealizados=0;
    // genera numero aleatorio
  int randomNumber=generarNumero();
  cout << "\nChe, tirate al ruedo, adivina el numero!\n Arrancamos suave, eh. "<<endl;
    do
    {
      cout<<"\nAdivina el numero, pibe\n";
      int intentos=inputUsuario();

      if (intentos!=randomNumber)
      {
        if(intentos<=randomNumber)
        {
          limpiarPantalla();
          cout<<" Ah, mira, eso estuvo muy bajo, como el mate sin azucar. Dale, de vuelta, pone mas onda. ";
        } 
        else
        {
          limpiarPantalla();
          cout<<"Muy alto, hermano! \nA ver si la pegas en el palo ";
        }

        intRealizados++;
      }
      else{
        limpiarPantalla();
        cout<<"\nAh, crack! Adivinaste, el numero es el secreto mejor guardado desde el gol de Maradona a los ingleses."
        "\n Adivinaste, campeon, el numero es: "<<randomNumber<<", felicitaciones!";
        break;
      }
      
    } while (intRealizados!=6);
  


  return 0;
}
