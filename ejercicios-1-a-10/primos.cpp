#include <iostream>

using namespace std;
bool esPrimo(int num) {
  int j;
  if (num <= 1) {
    return false;
    for (j = 2; j <= num / 2; j++) {
      if (num % 2 == 0) {
        return false;
      }
    }
    return true;
  }


}
int main(int argc, char
  const * argv[]) {

  int n, i;
  int suma = 0;

  cout << "Ingrese numero";
  cin >> n;
  if(!esPrimo(n)){
    cout<<"El numero no es primo";
  }
  else{
  for (i = 2; i <= n; i++) {
    if (esPrimo(i)) {
      suma += 1;
    }
  }
  cout<<"la"
  };

  return 0;
}