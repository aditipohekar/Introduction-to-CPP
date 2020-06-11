#include <iostream>
#include<cstring>
using namespace std;
int main() {
  char s1[20]="GOOD";
  char s2[10]=" ";
  strcpy(s2,s1);
  cout<<s2<<endl;
  return 0;
}
