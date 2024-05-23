#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int arreglo[]={1,2,3,4,5};
  int temp;
  int n=sizeof(arreglo)/sizeof(arreglo[0]);

  for (int i = 0; i < n/2; i++)
  {
    temp=arreglo[i]; //1
    arreglo[i]=arreglo[n-i-1]; //1=5-0-1=[4]
    arreglo[n-i-1]=temp;
  }
  for (int j = 0; j < n; j++)
  {
    cout<<arreglo[j]<<endl;
  } 
  return 0;
}
