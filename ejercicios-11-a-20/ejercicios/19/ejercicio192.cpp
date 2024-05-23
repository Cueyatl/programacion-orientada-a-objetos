/*
fecha: 19 de marzo del 2024
* Descripción: Crea una clase Scanner para que funcione como en java y 
* declarar una clase taller, biblioteca o similar para usarlo. Modificar el código para que sea más modular con na clase llamada App.
* Ejer 20
* Autor: Fernando Alvarez D.
*/
#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
class Scanner {
    string g;
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
 
class TallerDeCarros {
private:
      string model;
      string brand;
      int year; 
public:
    //ructor    
      TallerDeCarros(string m, string b, int y){
        model=m;
        brand=b;
        year=y;
      };
    //Destructor
    // ~TallerDeCarros (){
    //     cout<<"\nCarro eliminado\n";
    // }

    // Getters 
      string getModel(){
        return model;
      }
      string getBrand(){
        return brand;
      }
      int getYear(){
        return year;
      }
      //Setters
      void setModel( string& m){
        model=m;
      }
      void setBrand( string& b){
        brand=b;
      }
      void setYear( int& y){
        year=y;
      }

    //Funciones
    void mostrarCarro(){
      cout << "Marca: " << getBrand() << endl;
      cout << "Modelo: " << getModel() << endl;
      cout << "Year: " << getYear() << endl ;
    }   
    // elementos de lista, dentro de una instancia, ppor lo tanto, la lista y el tipo scanner estan dentro de la instancia
};
 
class App {
public:
    void Run (){
    Scanner* myScan=new Scanner();
    vector<string> vectorData;
    ingresarCarro(myScan, vectorData);
          
    }
 
private:
    void ingresarCarro(Scanner* scan, vector<string> data ){
      cout<<"ingresando carro"<<endl;
      const string items[]={"marca", "modelo", "agno"};

      for (auto i = 0; i < 3; i++)
        {
          cout<<"ingrese "<<items[i]<<": ";
          data.push_back(scan->nextLine());
          cout<<endl;
        }
        
        cout<<"ingresado con exito"<<endl;
        
        
        
    };
   
    void menuDeOpciones(Scanner* scan, TallerDeCarros* carro){
      cout<<"editar carro?";
      string option=scan->nextLine();
      if (option!="y")
      {
        ingresarCarro(scan,    
         
          
          
           
            
            
             
              )
      }
      
      
     
    };
};  
 
int main(int argc, char **argv)
{
  
  TallerDeCarros* mitaller= new TallerDeCarros("s","sa",1);
  cout<<mitaller->getBrand();
  mitaller->mostrarCarro();
    App app;
    app.Run();
    return 0;
}