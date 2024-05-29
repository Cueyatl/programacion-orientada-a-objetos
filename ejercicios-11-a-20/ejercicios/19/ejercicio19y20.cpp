//archivo: 
//autor: Daniel Emiliano Lopez Aguilar

/* descripción: Modificar el ejercicio 19 
para modularizar el funcionamiento de los 
métodos de la aplicación con una clase 
llamada App y aislar la ejecución.

*/
// ejercicio #19 y 20.
#include <iostream>
#include <vector>
#include <variant>
using namespace std;

class Scanner
{

public:
  string scnString()
  {
    string input;
    cin >> input;
    return input;
  }
  int scnInt()
  {
    int input;
    cin >> input;
    return input;
  }
  float scnFloat()
  {
    float input;
    cin >> input;
    return input;
  }
  double scnDouble()
  {
    double input;
    cin >> input;
    return input;
  }
  char scnChar()
  {
    char input;
    cin >> input;
    return input;
  }
  string nextLine()
  {
    string line;
    getline(cin, line);
    return line;
  }
};
class TallerDeCarros
{

private:
  string model;
  string brand;
  int year;

public:
  Scanner myScan = Scanner();
  vector<variant<int, string>> data;

  TallerDeCarros(string m, string b, int y)
  {
    model = m;
    brand = b;
    year = y;
  };
  // Getters
  string getModel() const
  {
    return model;
  }
  string getBrand() const
  {
    return brand;
  }
  int getYear() const
  {
    return year;
  }


  // Setters
  void setModel(const string &m)
  {
    model = m;
  }
  void setBrand(const string &b)
  {
    brand = b;
  }
  void setYear(const int &y)
  {
    year = y;
  }
  
  void showCar()
  {
    cout << "Model: " << getModel() << endl;
    cout << " Brand: " << getBrand() << endl;
    cout << "Year: " << getYear() << endl;
  }
  void nuevoCarro(Scanner* teclado, const vector<string>& items, vector<string>& detalles) {
        for (const auto& item : items) {
            cout << "Ingresa " << item << ": ";
            detalles.push_back(teclado->nextLine());
        }
    }
};
const vector<string> items = {"modelo", "marca", "año"};
 
void menuDeOpciones(Scanner* teclado, TallerDeCarros* carro, vector<string>& detalles);
 
class App
{
private:
  void inputDetails(Scanner *teclado,  vector<string>& details)
  {
    for (const auto& item : items) {
            cout << "Ingresa " << item << ": ";
            details.push_back(teclado->nextLine());
        }
  }
  void menu(Scanner *teclado, TallerDeCarros *carro)
  {
    cout << "Editar carro (s)i o (n)o" << endl;
    char input = teclado->scnChar();
    switch (input)
    {
    case 's':
      cout << "Ingresar datos" << endl;

      cout << "modelo" << endl;

      carro->setModel(teclado->scnString());

      cout << "marca" << endl;

      carro->setBrand(teclado->scnString());

      cout << "año" << endl;

      carro->setYear(teclado->scnInt());

      cout << endl;

      carro->showCar();

    case 'n':
      cout << "Detalles del carro:" << endl;
      carro->showCar();
      break;
    default:
      break;
    }
  }

public:
  void execute()
  {
    Scanner *teclado = new Scanner();
    const vector<string> items = {"modelo, marca, año"};
    vector<string> details;

    inputDetails(teclado, details);
  }
};

int main(int argc, char const *argv[])
{
  App app;
  app.execute();
  return 0;
}
