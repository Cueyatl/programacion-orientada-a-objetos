// 4/10/24
// Daniel Emiliano Lopez Aguilar
// Elaborar clase "Animal" y dos clases derivadas "Perro" y "Gato"
// ejercicio 23.
#include<iostream>
using namespace std;
class Animal 
  {
  protected:
    string nombre;
  private:
  public:
    Animal(const string& nombre): nombre(nombre){};
    void comer(){
      cout<<nombre<< " esta comiendo"<<endl;
    }
    void dormir(){
      cout<<nombre<< " esta durmiendo"<<endl;
    }
  };
class Perro : public Animal
{
  public:
    Perro(const string& nombre):Animal(nombre){};
    void ladrar(){
      cout<<nombre<<" esta ladrando"<<endl;
    }
};
class Gato : public Animal
{
  public:
    Gato(const string& nombre):Animal(nombre){};
    void maullar(){
      cout<<nombre<<" esta maullando"<<endl;
    }
};
// #####################
class Vehiculo
{
protected:
  string nombre;
private:
public:
  Vehiculo(const string& nombre):nombre(nombre){};
  void acelerar(){
    cout<<nombre<<" esta acelerando"<<endl;
  }
  void frenar(){
    cout<<nombre<<" esta frenando"<<endl;
  }
};
class Carro: public Vehiculo
{
  public:
    Carro(const string& nombre):Vehiculo(nombre){};
  void arrancar(){
    cout<<nombre<<" esta arrancar"<<endl;
  }
  void enciendeLuces(){
    cout<<nombre<<" esta encendiendo las luces"<<endl;
  }
};
class Bicicleta : public Vehiculo{
  public:
    Bicicleta(const string& nombre):Vehiculo(nombre){};
  void girar(){
    cout<<nombre<<" esta girando"<<endl;
  }
  void saltar(){
    cout<<nombre<<" esta saltando"<<endl;
  }
};
int main(int argc, char const *argv[])
{
  Perro perro("Papaya");
  perro.comer();
  perro.dormir();
  perro.ladrar();
  Gato gato("Michi");
  gato.comer();
  gato.dormir();
  Carro carro("Chevy");
  carro.arrancar();
  carro.enciendeLuces();
  Bicicleta bicicleta("Benotto");
  bicicleta.girar();
  bicicleta.saltar();
return 0;
}