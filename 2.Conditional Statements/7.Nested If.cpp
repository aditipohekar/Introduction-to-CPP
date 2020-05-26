#Day 3/Nested if

#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter three nos";
cin>>a>>b>>c;
if(a>b && a>c)
{
cout<<"a is greatest";
}
else if(b>c)
{
cout<<"b is greatest";
}
else
cout<<"c is greatest";

}
