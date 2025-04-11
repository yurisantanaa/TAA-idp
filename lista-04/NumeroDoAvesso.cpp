#include<iostream>
using namespace std;
int main(){
  unsigned int n;
  cin >> n;
  unsigned int resultado = 0;
  for (int i = 0; i < 32; ++i)
  {
    if ((n >> i) & 1)
    {
      resultado |= (1U << (31 - i));
    }
  }
  cout << resultado << endl;
  return 0;
}