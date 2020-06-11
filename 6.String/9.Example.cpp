#include <iostream>
using namespace std;
int main() {
  char S[100];
  char s[100];
  cout<<"Enter your name";
  cin.getline(S,100);
  cout << "Welcome!"<< S<<endl;

  
  cout<<"Enter your name";
  cin.getline(s,100);
  cout << "Welcome!"<<s<<endl;
  return 0;
}
