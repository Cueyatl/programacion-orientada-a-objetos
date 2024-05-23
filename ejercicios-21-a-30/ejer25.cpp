#include <iostream>
#include <cmath>
using namespace std;
class Figura {
public:
  virtual double calcularArea() const = 0;
};
class Rectangulo : public Figura {
private:
    double base;
    double altura;
public:
    Rectangulo(double base, double altura) : base(base), altura(altura) {}
    double calcularArea() const override {
        double area = base * altura;
        return area;
    }
};
class Circulo : public Figura {
private:
    double radio;
public:
    Circulo(double radio) : radio(radio) {}
    double calcularArea() const override {
        double pi = atan(1.0) * 4;
        double area = pi * (radio * radio);
        return area;
    }
};
int main() {
    Rectangulo rectangulo(5, 3);
    Circulo circulo(4);
    cout << "Rectangulo area: " << rectangulo.calcularArea() << endl;
    cout << "Circulo area: " << circulo.calcularArea() << endl;
    return 0;
}