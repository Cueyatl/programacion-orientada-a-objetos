#include<iostream>
#include<string>
using namespace std;
int main(){
	string mensaje = "Hola!";
	string added="Miriam";
	cout<<"Mensaje: "<<mensaje<<endl;
	cout<<"Longitud del mensaje: "<<mensaje.length()<<endl;
	mensaje += added;
	cout<<"Mensaje actualizado: "<<mensaje<<endl;
	return 0;
}
