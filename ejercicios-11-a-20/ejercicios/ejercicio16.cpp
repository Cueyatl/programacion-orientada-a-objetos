// 16  Ejercicio deiciseis
//  Daniel Emiliano Lopez Aguilar
//   5 de marzo del 2024
/*crear clase libro con metodos para mostrar y actualizar informacion
  incluye parametros de autor y titulo.
*/
#include <iostream>
using namespace std;

class Libro
{
private:
  string titulo;
  string autor;

public:
  Libro(string t, string a)
  {
    titulo = t;
    autor = a;
  }
  void mostrar()
  {
    cout << "Titulo del libro: " << titulo << endl;
    cout << "Autor del libro: " << autor << endl;
  }
  void actualizarInfo(string nuevoTitulo, string nuevoAutor)
  {
    if (nuevoTitulo == "")
    {
      nuevoTitulo = this->titulo;
    }
    if (nuevoAutor == "")
    {
      nuevoAutor = this->autor;
    }

    this->titulo = nuevoTitulo;
    this->autor = nuevoAutor;
    cout << "actualizado con exito"
         << "\n";
  }
};
int main(int argc, char const *argv[])
{
  Libro libro("EL nombre del viento", "Patrick Rothfuss");
  libro.mostrar();
  libro.actualizarInfo("", "George R.R. Martin");
  libro.mostrar();

  return 0;
}
