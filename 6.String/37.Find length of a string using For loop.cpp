# include<iostream>
using namespace std;
    
/*program for finding length of a string using for loop

*/
int main()
{

	string str="welcome";
	int count=0;
	for(int i=0;str[i]!='\0';i++)
	{
    count++;
	}
  cout<<"length is"<<count<<endl;
	return 0;
}
