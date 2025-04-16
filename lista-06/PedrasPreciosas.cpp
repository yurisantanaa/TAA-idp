#include <stack>
#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int count = 0;
    string s;
    cin >> s;
    stack<char> st;
    for(char c : s){
      if(c == '<') st.push(c);
        else if (c == '>'){
          if (!st.empty()) {
            st.pop();
            count++;
        }
      }
    }
    cout << count << endl;
  }
  
  return 0;
}
