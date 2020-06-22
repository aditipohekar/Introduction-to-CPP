#Day 4

#include <iostream>
using namespace std;
int main()
{
  int n,r,sum=0,m;
  cout<<"Enter the number";
  cin>>n;
  m=n;
  while(n>0)
  {
    r=n%10;
    n=n/10;
    sum=sum+(r*r*r);
    cout<<r<<endl;
  }

  if(sum==m)
  {
    cout<<"Amstrong it is!!";
  }
  else 
  cout<<"Not Amstrong!!";
return 0;
 
}
