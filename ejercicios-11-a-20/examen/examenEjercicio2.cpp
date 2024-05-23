// Daniel Emiliano Lopez Aguilar.
// 16 de marzo del 2024.
//Examen ejercicio 2.
#include <iostream>
using namespace std;
class Juego
{
public:
  string seleccionJugador(int numeroDeJugador)
  {
    string jugador;
    while (jugador != "C" && jugador != "T")
    {
      cout << "JUGADOR "<<numeroDeJugador<<". Ingresa \"T\" para TRAICIONAR o \"C\" para COOPERAR." << endl;
      cin >> jugador;
      system("cls");
      if (jugador == "t")
      {
        jugador = "T";
      }
      if (jugador == "c")
      {
        jugador = "C";
      }
    }
    return jugador;
  }
  void estaJugando()
  {
    string jugador1=seleccionJugador(1);
    string jugador2=seleccionJugador(2); 
    cout << "Dilema del prisionero\n"<< endl;

    if (jugador1 != jugador2)
    {
      jugador1 == "C" ?

                      cout << "El jugador 1 ha sido TRAICIONADO" << endl
                           << "El jugador 1 recibe una sentencia LARGA \nEl jugador 2 recibe una sentencia REDUCIDA" << endl

                      : cout << "El jugador 2  ha sido TRAICIONADO" << endl
                             << "El jugador 2 recibe una sentcencia LARGA \nEl jugador 1 recibe una sentencia REDUCIDA" << endl;
    }
    else if (jugador1, jugador2 == "T")
    {
      cout << "Ambos jugadores han TRAICIONADO" << endl;
      cout << "Ambos jugadores reciben una sentencia MODERADA" << endl;
    }
    else if (jugador1, jugador2 == "C")
    {
      cout << "Ambos jugadores han COOPERADO" << endl;
      cout << "Ambos jugadores reciben una sentencia REDUCIDA" << endl;
    }
  }
};

int main(int argc, char const *argv[])
{
  Juego dilema;
  dilema.estaJugando();
  
  return 0;
}
