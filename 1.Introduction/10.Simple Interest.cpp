#Day 2/Simple Interest

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
float P,r,SI,t;
cout<<"Enter P,R,T";
cin>>P>>r>>t;
SI=(P*r*t)/100;
cin>>"Simple interest is"<<SI;

return 0;
}
