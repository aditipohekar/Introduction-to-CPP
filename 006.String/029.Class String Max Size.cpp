#include <iostream>
#include<string>
using namespace std;
int main() {
  string str="HELLO";
  str.resize(30);
  cout<<str.max_size()<<endl;
  cout<<str;
  return 0;
}
