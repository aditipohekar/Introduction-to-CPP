#include <iostream>
#include<cstring>
using namespace std;
int main() {

  char s1[20]="x=10;y=20;z=35";
  cout<<strtok(s1,"=;")<<endl;

  return 0;
}
