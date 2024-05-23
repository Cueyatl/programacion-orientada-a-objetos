#include <iostream>
#include <cmath>
using namespace std;

const long double GRAVEDAD = 9.81; // m/s^2
const long double COEFICIENTE_RESISTENCIA_AIRE = 0.05;//0.05

class Proyectil {
private:
  long double posicionX;
  long double posicionY;
  long double velocidadInicial;
  long double anguloLanzamiento;
  long double tiempo;

public:
  Proyectil(long double velocidadInicial, long double anguloLanzamiento)
      : velocidadInicial(velocidadInicial), anguloLanzamiento(anguloLanzamiento) {
    posicionX = 0;
    posicionY = 0;
    tiempo = 0;
  }

  void mover(double tiempo) {
    this->tiempo += tiempo;
    long double velocidadX = calcularVelocidadX();
    long double velocidadY = calcularVelocidadY();
    long double aceleracionX = calcularAceleracionX();
    long double aceleracionY = calcularAceleracionY();
    


    // Aplicar movimiento parabólico
    long double velocidadVertical=pow(this->tiempo,2)*GRAVEDAD;
    long double ejeY=velocidadY*this->tiempo;
    posicionX +=   ((aceleracionX/2) * pow(tiempo,2))+(velocidadX * tiempo);
    posicionY =ejeY-(velocidadVertical/2)+aceleracionY/2;      
  }

  long double calcularVelocidadX() const {
    return (velocidadInicial * cos(anguloLanzamiento * M_PI / 180.0));
  }

  long double calcularVelocidadY() const {
    return velocidadInicial * sin(anguloLanzamiento * M_PI / 180.0);
  }
  

  long double calcularAceleracionX() const {
    return - (COEFICIENTE_RESISTENCIA_AIRE * calcularVelocidadX());
  }

  long double calcularAceleracionY() const {
    return - (COEFICIENTE_RESISTENCIA_AIRE * calcularVelocidadY()) ;
  }


  void mostrarPosicion() const {
    cout << "Tiempo: " << tiempo << " segundos" << endl;
    cout << "Posición X: " << posicionX << " metros" << endl;
    cout << "Posición Y: " << posicionY << " metros" << endl;
    
  }
};

int main() {
  long double velocidadInicial, anguloLanzamiento;

  //cout << "Ingrese la velocidad inicial (m/s): ";
  //cin >> velocidadInicial;
  velocidadInicial=50  ;

  //cout << "Ingrese el ángulo de lanzamiento (grados): ";
  //cin >> anguloLanzamiento;
  anguloLanzamiento=30;


  Proyectil proyectil(velocidadInicial, anguloLanzamiento);

  // Simulación del movimiento durante 10 segundos
  for (int i = 0; i < 10; ++i) {
    proyectil.mover(1); // Avanzar 1 segundo en cada iteración
    proyectil.mostrarPosicion();
    
  }

  return 0;
}
