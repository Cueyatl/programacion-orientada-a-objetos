#include <iostream>
#include <string>
// #include <memory>
using namespace std;

class MiClase
{
  private:
    int x;
  public:
    MiClase(int valor)
    {
      x=valor;
      cout<<"constructor llamado "<<x<<endl;
    }
    // destructor
    ~MiClase()
    {
      cout << "Eliminando instancia de la clase"<<endl;
    }
};
class Producto {
  private:
    string nombre;
    int precio;
    int cantidad;

  public:
    Producto(const string& n, int p, int c):nombre(n),precio(p),cantidad(c){
      cout<<"Nombre "<<nombre<<"  Precio "<<precio<<" Cantidad "<<cantidad<<endl;
    }

    string getNombre()const{return nombre;}
    int getPrecio()const{return precio;}
    int getCantidad()const{return cantidad;}
};
int main(int argc, char const *argv[])
{
  //apuntadores
  // MiClase* ptrObjeto= new MiClase(10); //apuntador estatico
  // delete ptrObjeto;

  //memory unique_ptr
  // unique_ptr<MiClase> ptrObjecto =make_unique<MiClase>(20); //dinamico
  
  // Producto cigarro("malboro", 5, 20);
  Producto* cigarro=new Producto("malboro", 5, 20);
  cout<<cigarro->getCantidad();
  delete cigarro;
  return 0;
}