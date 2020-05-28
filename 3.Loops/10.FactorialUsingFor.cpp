#Day 4

#include <iostream>
using namespace std;

int main() {
  int n,i,fact=1;
  cout<<"Enter the number";
  cin>>n;
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
    cout<<"fact ="<<fact<<endl;
    
  }
  return 0;
}
