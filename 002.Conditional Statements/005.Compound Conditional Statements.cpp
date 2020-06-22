#Day 3/CompoUND Conditional Statements

#nclude<iostream>
using namespace std;
int main()
{
float hour;
cout<<"Enter the hour";
cin>>hour;
if(hour>9 && hour<=23)
{
cout<<"Working";
}
else
{
cout<<"Leisure";
}
return 0;
}
