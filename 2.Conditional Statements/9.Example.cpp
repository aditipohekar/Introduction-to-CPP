#Day 3/Nested If

# include<iostream>
#include<math.h>
using namespace std;
    
/*program for find nature of quadratic roots 


*/
int main() 			
 {
	
	float m1,m2,m3,Avg;
	cout<<"enter marks in three subject";
	cin>>m1>>m2>>m3;
 Avg=(m1+m2+m3)/3.0;

	if(Avg>=60)
	{
		cout<<"A"<<endl;
	 }
		else if(Avg>=35 && Avg<60)
		{

			cout<<"B"<<endl;
		;
		}
	 		else
			cout<<"C";
			return 0;

}



 
