//2 de febrero del 2024
//DELA
#include <iostream>
using namespace std;
//(grados centígrados × 9/5) +32
double farens(double temperatura){
  return (temperatura*9/5)+32;
}

int main(int argc, char const *argv[]){
  double temperaturaUsuario;
  cout<<"Programa para convertir grados Celsius a Fahrenheit"<<endl;
  cout<<"Ingresar grados Celsius:"<<endl;
  cin>>temperaturaUsuario;
  cout<<temperaturaUsuario<<" Celsius = " <<farens(temperaturaUsuario)<<" fahrenheit.";
  return 0;
}


  