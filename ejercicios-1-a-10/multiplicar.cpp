//31 de enero
//Multiplica el numero ingresado por el 1 al 10.
#include <iostream>
using namespace std;
int main(void){
  int numeroUsuario;
  cout<<"Ingresa numero para multiplicar: ";
  cin>>numeroUsuario;
  for(int i = 1; i <= 10; i++)
  {
    cout<<numeroUsuario<<" por "<<i<<" = "<<numeroUsuario*i<<"\n";
  }
  return 0;
} 