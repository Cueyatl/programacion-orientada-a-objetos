#include<iostream>
#include<string>
using namespace std;
int main(){
    string frase = "El perro marron duerme";
    size_t encontrado = frase.find("perro");
    if (encontrado != string::npos){
    	frase.replace(encontrado, 5, "gato");
    	
	}
	cout<<"Frase actualizada: "<<frase<<endl;
	return 0;
}

