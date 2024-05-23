// 31 de enero.
//programa para checar si el numero ingresado es par o inpar.
#include <iostream>
using namespace std;
int main(void){
  int numberCheck;
  cout<<"Programa para numeros pares e impares: ";
  cout<<"Ingresa numero: ";
  cin>>numberCheck;
  if(numberCheck%2==0)
  {
     cout<<numberCheck<< " Es par.";
  }
  else{ 
     cout<<numberCheck<< " Es inpar.";

  }
  return 0;
}