#include<iostream>
#include<cctype>
#include <cstring>
using namespace std;
int main(){
  string a,b;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> a >> b;
    for (int i = 0; i < a.length(); i++)
    {
      int temp1;
      int temp2;
      char charA = a.at(i);
      char charb = b.at(i);
      if(isupper(charA)) temp1 = 0;
      else temp1 = 1;
      if (isupper(charb)) temp2 = 0;
      else temp2 = 1;
      if (temp1 ^ temp2) cout << (char)tolower(charA);
      else cout << (char)toupper(charA);
    }
    cout << endl;  
  }
  return 0;
}