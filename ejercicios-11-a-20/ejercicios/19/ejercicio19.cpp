#include <iostream>
#include <vector>
#include <variant>
using namespace std;


class Scanner{
  
  public:
      string scnString(){
      string input;
      cin>>input;
      return input;
    }
      int scnInt(){
      int input;
      cin>>input;
      return input;
    }
      float scnFloat(){
      float input;
      cin>>input;
      return input;
    }
      double scnDouble(){
      double input;
      cin>>input;
      return input;
    }
    char scnChar(){
      char input;
      cin>>input;
      return input;
    }
    string nextLine(){
      string line;
      getline(cin, line);
      return line;
    }
};
class TallerDeCarros{
   
    private:
      string model;
      string brand;
      int year; 

    public:
      TallerDeCarros(string m, string b, int y){
       

        model=m;
        brand=b;
        year=y;
      };
      // Getters 
      string getModel()const{
        return model;
      }
      string getBrand()const{
        return brand;
      }
      int getYear()const{
        return year;
      }
      //Setters
      void setModel(const string& m){
        model=m;
      }
      void setBrand(const string& b){
        brand=b;
      }
      void setYear(const int& y){
        year=y;
      }


      
      
      Scanner myScan= Scanner();
      vector<variant<int, string>> data;

      string agregarCarro(){
      string input=myScan.scnString();
      data.push_back(input);
      return input;
        
      };

      void elimiarCarro(elementID){
        
        
        
        data.assign();
        data.pop_back();

      }
    };

int main(int argc, char const *argv[])
{
  /*
  Instructions
Modificar el ejercicio 19 para modularizar el funcionamiento de los métodos de la aplicación con una clase llamada App y aislar la ejecución.

Investigar la integración de librerías en c++ 
- vector 
- string
*/
  // apuntadores es buena practica.
  TallerDeCarros* tallerDeRafitaDos=new TallerDeCarros();
  tallerDeRafitaDos->agregarCarro();
  tallerDeRafitaDos->agregarCarro(); 
  return 0;
}