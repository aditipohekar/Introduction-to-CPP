#include<iostream>
#include<string>
using namespace std;
    
/*program for change cases to upper case only

*/
int main()
{

	string str="wELcoMe7";
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
		     str[i]=str[i]-32;
		}
	}
	cout<<str<<endl;
	return 0;
}
