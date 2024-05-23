#include <iostream>
#include <vector>

using namespace std;
int main(int argc, char const *argv[])
{
  vector<int> nums;
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(3);
  cout<<"elemento en la posicion 1:"<<nums[0]<<endl;
  for (int i = 0; i < nums.size(); i++)
  {
    cout<<nums[i]<<endl;
  }
  
  vector<string> palabras={ "hola","hola","hola","hola"};
  vector<string> otras[3];

for (auto t = palabras.begin(); t != palabras.end(); t++) {
    cout << *t << endl;
}
  return 0;
}
