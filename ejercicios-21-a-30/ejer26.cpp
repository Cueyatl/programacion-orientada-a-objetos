#include<iostream>

using namespace std;
class Vehiculo
{
public:

  virtual double calcularVelocidad() const=0;
  
};

class Automovil: public Vehiculo{
  private:
    const double distancia = 80;
  public:
    Automovil(double distancia, double tiempo ) : distancia(distancia){}
    double calcularVelocidad() const override{
      double tiempo;
      cout<<"Ingrese tiempo";
      cin>>tiempo;
      cout<<"distancia: "<<distancia<<", velocidad:"<<distancia/tiempo<<", tiempo:"<<tiempo<<endl;
      return distancia/tiempo;
    }
};
class Bicicleta: public Vehiculo{
  private:
    const double distancia = 20;
  public:
    Bicicleta(double distancia, double tiempo ) : distancia(distancia){}
    double calcularVelocidad() const override{
      double tiempo;
      cout<<"Ingrese tiempo";
      cin>>tiempo;
      cout<<"distancia: "<<distancia<<", velocidad:"<<distancia/tiempo<<", tiempo:"<<tiempo<<endl;
      return distancia/tiempo;
    }
};
class Motocicleta: public Vehiculo{
  private:
    const double distancia = 60;
  public:
    Motocicleta(double distancia, double tiempo ) : distancia(distancia){}
    double calcularVelocidad() const override{
    double tiempo;
    cin>>tiempo;
    cout<<"Ingrese tiempo";
    cout<<"distancia: "<<distancia<<", velocidad:"<<distancia/tiempo<<", tiempo:"<<tiempo<<endl;
    return distancia/tiempo;
    }
};


int main(int argc, char const *argv[])
{
  
  Motocicleta italika();
  
  
return 0;
}