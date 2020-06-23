#include <iostream>
#include<cstring>
using namespace std;
int main() {

  char s1[20]="235";
  char s2[20]="54.68";
  long int x = strtol(s1,NULL,10);
  float y=strtof(s2,NULL);
  cout<<x+10<<endl<<y-5<<endl;

  return 0;
}
