#include<iostream>
using namespace std;
 
int main(){
  unsigned int c;
  int b;
  cin >> c >> b;
  unsigned int n;
  unsigned int mascara = ~(1 << b);
  for (unsigned int i = 0; i < c; i++)
  {
    cin >> n;
    unsigned int resultado = n &= mascara;
    cout << resultado << endl;
  }
}