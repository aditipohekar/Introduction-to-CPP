#include <iostream>
using namespace std;
int main() {
  char S[100];
  char s[100];
  cout<<"Enter your name";
  cin.get(S,100);
  cout << "Welcome!"<< S<<endl;
  
  cin.ignore();
  
  cout<<"Enter your name";
  cin.get(s,100);
  cout << "Welcome!"<<s<<endl;
  return 0;
}
