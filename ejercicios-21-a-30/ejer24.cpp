#include<iostream>
using namespace std;
class Vehiculo
{
protected:
  string modelo;
private:
public:
  Vehiculo(/* args */);
  Vehiculo(const string& modelo): modelo(modelo){};

};
class Carro: public Vehiculo
{
  public:
    Carro(const string& modelo): Vehiculo(modelo){};
    void pesoPluma()
    {
      modelos();
    }
  private:
    void  modelos(){
      cout<<"modelo " << modelo <<" clase G63, lo que un dia sogne, Todo ya me lo compre"<< endl;
    };
};
class Bicicleta: public Vehiculo
{
  public:
    Bicicleta(const string& modelo): Vehiculo(modelo){};
    void DecirSlogan(){
      slogan();
    }
  private:
    void slogan(){
      cout<<modelo<<": Donde la innovacion se encuentra con la aventura."<<endl;
    }
    
};

int main(int argc, char const *argv[])
{
  Carro Mercedez("AMG");
  Mercedez.pesoPluma();
  Bicicleta Trek("Trek");
  Trek.DecirSlogan();

return 0;
}