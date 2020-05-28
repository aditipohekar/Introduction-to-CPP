#Day 4

#include <iostream>
using namespace std;

int main() {
  int n,i,sum=0;
  cout<<"Enter the number";
  cin>>n;
  for(i=1;i<=n;i++)
  {
   if(n%i==0)
   {
     sum=sum+i;
     cout<<sum<<endl;
   }
  }
   if(2*n==sum)
   {
     cout<<"Perfect No.!!";
   }
   else
   cout<<"Not Perfect, Sorry!!";
  return 0;
}
