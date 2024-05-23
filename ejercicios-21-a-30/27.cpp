/*
Daniel Emiliano Lopez Aguilar
ejercicio 27

*/
 
#include <iostream>
using namespace std;
 
class Prestamo {
	protected:
		double monto;
		double tasa;
	public:
		Prestamo(double monto, double tasa) : monto(monto), tasa(tasa){}
		virtual double calculaInteres() const{
			return monto * tasa;
		}
};

class Hipoteca : public Prestamo{
	public:
		Hipoteca(double monto, double tasa) : Prestamo(monto, tasa){}
		double calculaInteres() const override{
			return monto*tasa*1.5;
		}
};
 
class Personal : public Prestamo{
	public:
		Personal(double monto, double tasa) : Prestamo(monto, tasa){}
		double calculaInteres() const override{
			return monto*tasa*1.2;
		}
};
 
class App{
	public: 
		void run(){
			Hipoteca ivan(1500000, 0.10);
			Personal paula(35000, 0.02);
			cout<<"Intereses de la hipoteca: $"<<ivan.calculaInteres()<<endl;
			cout<<"Interes del prestamo: $"<<paula.calculaInteres()<<endl;	
		}
};
 
int main(){
	App miApp;
	miApp.run();
	return 0;
}