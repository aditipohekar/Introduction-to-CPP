#include <iostream>
#include<string>
using namespace std;
int main() {
  string str="HELLO";
  str.resize(30);
  cout<<str.capacity()<<endl;
  cout<<str;
  return 0;
}
