// Daniel Emiliano Lopez Aguilar
// abril 4 de 2024.
// app.cp Ejercicio 22.
#include <iostream>
#include <string>
using namespace std;

class App
{

public:
	
	/*
	App.reemplazar()
	Metodo para reemplazar frase
	argumentos:
			Frase ingresada.
			Frase buscada en frase ingresada.
			Frase que reemplazara frase buscada.
	*/
	string reemplazar(string phrase, string pSearch, string pReplace)
	{
		size_t find = phrase.find(pSearch);
		int searchSize =	 pSearch.size();
		return find != string::npos ?
			phrase.replace(find, searchSize, pReplace) 
			:
			"No se encontro la frase buscada: " + pSearch + "\n";
	}

	/*
	App.agregar();
	Metodo para agregar a frase
	argumentos:
			Frase ingresada.
			Frase a agregar a frase ingresada.
*/
	string agregar(string phrase, string addedPhrase)
	{
		string space = " ";
		phrase += space += addedPhrase;
		return phrase;
	}

	/*
	App.longitudMensaje()
	Metodo para conocer la longitud del mensaje en caracteres.
	*/
	string longitudMensaje(string phrase) { return to_string(phrase.size()); }

	string  imprimir(string message){ cout << message << endl; return ""; };
};

int main(int argc, char const *argv[])
{
	App miapp;
	string const frase = "el perro marron duerme";
	string const fraseBuscada = "perro";
	string const fraseReemplazo = "gato";
	string const fraseAgregada = "con mucha profundidad, afirmando su cansancio.";

	string frase1 = miapp.agregar(
			miapp.reemplazar(frase, fraseBuscada, fraseReemplazo),
			fraseAgregada);

	string frase2 = miapp.reemplazar(
			miapp.agregar(frase, miapp.longitudMensaje(frase)),
			fraseBuscada,
			fraseReemplazo);

	frase2 = miapp.agregar(frase2, "dias " + fraseAgregada);
	miapp.imprimir(frase1);
	miapp.imprimir(frase2);
	return 0;
}
