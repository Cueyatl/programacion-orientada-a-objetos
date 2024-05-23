// Daniel Emiliano Lopez Aguilar
// ejercicio 28.
// 4/19/2024

#include <iostream>
using namespace std;

class CuentaBancaria
{
  protected:
    double saldo;
  public:
    CuentaBancaria(double saldoInit) : saldo(saldoInit){};  
    virtual double ejecutarMantenimiento()=0;
    virtual double ahorrarPorMeses(double meses)=0;
    virtual double retirar(double retiro)=0;
    virtual double depositar(double abono)=0;

    void consultar() const
    {
      cout << saldo << endl;
    }
};

class CuentaAhorro : public CuentaBancaria
{
protected:
  const double interes = 0.02;
private:
  double ejecutarMantenimiento(){
    return 0;
  }
public:

  CuentaAhorro(double saldo) : CuentaBancaria(saldo) {}
  // AhorrarPorMeses metodo de CuentaAhorro, parametros: cantidad meses.
  // Retorna el saldo de la cuenta con el interes de ahorro aplicado.
  // Formula para calcular el interes:
  // (interes * meses * saldo).
  double ahorrarPorMeses(double meses) override
  {
    cout << "saldo" << saldo << endl;
    cout << "interes" << interes * meses << endl;
    cout << "nuevo saldo" << saldo << endl;
    // nuevo saldo:
    saldo += (meses * interes * saldo);
    return saldo;
  }

  double retirar(double retiro) override
  {
    cout << "Esta retirando" << retiro << endl;
    return saldo -= retiro;
  }
  double depositar(double abono) override
  {
    cout << "Esta abonando" << abono << endl;
    return saldo += abono;
  }

};

class CuentaCorriente : public CuentaBancaria
{
protected:
  const double cuotaDeMantenimiento = 55;
private:
  double ahorrarPorMeses(double meses){
    return 0;
  }
public:
  CuentaCorriente(double saldo) : CuentaBancaria(saldo) {}
  // ejecutarMantenimiento es un metodo de la clase CuentaCorriente
  // regresa el saldo menos la cuota cobrada.
  double ejecutarMantenimiento() override
  {
    cout << "cuota de mantenimiento es de:" << cuotaDeMantenimiento << endl;
    return saldo -= cuotaDeMantenimiento;
  
  }
  double retirar(double retiro) override
  {
    cout << "Esta retirando" << retiro << endl;
    return saldo -= retiro;
  }
  double depositar(double abono) override
  {
    cout << "Esta abonando" << abono << endl;
    return saldo += abono;
  }
};



int main(int argc, char const *argv[])
{
  
  CuentaAhorro cliente001(100);
  cliente001.depositar(1000);
  cliente001.retirar(500);
  cliente001.consultar();
  return 0;
}
