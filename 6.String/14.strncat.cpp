#include <iostream>
#include<cstring>
using namespace std;
int main() {
  char s1[20]="GOOD";
  char s2[20]="MORNING";
  strncat(s1,s2,6);
  cout<<s1<<endl;
  return 0;
}
