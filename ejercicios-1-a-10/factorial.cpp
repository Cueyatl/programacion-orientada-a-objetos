//2 de febrero del 2024.

  #include <iostream>
  using namespace std;

  long factorialMetodo(long numeroUsuario){
      if (numeroUsuario < 0) {
    cout << "No se puede calcular el factorial de un numero negativo." << endl;
    return -1;  // Retornar un valor especial para indicar un error.
  }
    long factorial=1;  
    for(int i = 1; i <= numeroUsuario; i++){
      factorial*=i;
    }
      return factorial;
  }
  /*  */
  int main(int argc, char **argv){
    long numeroUsuario;
    cout<<"Programa para calcular el factorial de un numero."<<endl;
    cout<<"Ingrese numero: ";
    cin>>numeroUsuario;
    long resultado=factorialMetodo(numeroUsuario);
    cout<<numeroUsuario<<"! = "<<resultado<<endl;
     if (resultado != -1) {
    cout << numeroUsuario << "! = " << resultado << endl;
  }
    return 0;
  } 