#include <iostream>
using namespace std;
 
int main(){
  int c;
  cin >> c;
  for (int i = 0; i < c; i++)
  {
    long long int n1,n2;
    long long int ans;
    cin >> n1 >> n2;
    cin >> ans;
    long long int temp = n1 ^ n2;
    long long n3 = ans ^ temp;
    cout << n3 << endl;
  }
  
}