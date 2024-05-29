#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
  int arr[] = {10, 20, 30};
int *ptr = arr;  // points to arr[0]
 // now points to arr[1]
int length = sizeof(arr) / sizeof(arr[0]);

for(int i = 0; i < length ; i++)
{
  ptr++;
  cout<<*ptr<<endl;
}

return 0;
}