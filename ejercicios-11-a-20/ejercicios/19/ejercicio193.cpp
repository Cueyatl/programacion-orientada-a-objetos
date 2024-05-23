/*
* fecha: 19 de marzo del 2024
* Descripción: Crea una clase Scanner para que funcione como en java y 
* declarar una clase taller, biblioteca o similar para usarlo. Modificar el código para que sea más modular con una clase llamada App.
* Ejer 20
* Autor: Fernando Alvarez D.
*/
#include <iostream>
#include <string>
using namespace std;
 
class Scanner {
public:
    int nextInt() {
        int numero;
        cin >> numero;
        return numero;
    }
    float nextFloat(){
        float numero;
        cin >> numero;
        return numero;
    }
    double nextDouble(){
        double numero;
        cin >>  numero;
        return numero;
    }
    string nextLine() {
        string line;
        //cin.ignore();
        getline(cin, line);
        return line;
    }
    char nextChar() {
        char dato;
        cin >> dato;
        return dato;
    }
};
 
class MiTaller {
private:
    string modelo;
    string agno;
    string color;
    string duegno;
    string marca;
public:
    //Constructor    
    MiTaller(string mod, string _agno, string col, string due, string mar) {
        modelo = mod;
        agno = _agno;
        color = col;
        duegno = due;
        marca = mar;
    }
    //Destructor
    ~MiTaller (){
        cout<<"\nCarro eliminado\n";
    }
    //Funciones
    void mostrarCarro(){
        cout <<"Modelo: "<<modelo<<endl;
        cout <<"Marca: "<<marca<<endl;
        cout <<"Color: "<<color<<endl;
        cout <<"Año: "<<agno<<endl;
        cout <<"Dueño: "<<duegno<<endl;
    }   
};
 
class App {
public:
    void Run (){
        Scanner* teclado = new Scanner();
        const string items[] = {"modelo", "año", "color", "nombre del dueño", "marca"};
        string details[5];
 
        ingresarDetalles(teclado, items, details);
 
        MiTaller* carro = new MiTaller(details[0], details[1], details[2], details[3], details[4]);
        menuDeOpciones(teclado, carro);
        delete teclado;
        delete carro;
    }
 
private:
    void ingresarDetalles(Scanner* teclado, const string items[], string details[]) {
        for (int i = 0; i < 5; i++) {
            cout << "Ingresa " << items[i] << ": ";
            details[i] = teclado->nextLine();
        }
    }
 
    void menuDeOpciones(Scanner* teclado, MiTaller* carro){
        cout << "\nEditar carro (S/n)? ";
        char opc = teclado->nextChar();
        switch (opc) {
            case 'S':
                break;
            case 'n':
                cout<<"\nDetalles del carro:"<<endl;
                carro->mostrarCarro();
                break;
            default:
             cout<<"\nOpción invĺida!\n";
                break;
        }
    }  
};  
 
int main(int argc, char **argv)
{
    App app;
    app.Run();
    return 0;
}

